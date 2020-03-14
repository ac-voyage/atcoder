/* AtCoder Panasonic Programming Contest 2020. Task D. */
#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto {

struct nform {
    string form;
    int used;
    nform(string f = "", int u = 0)
        : form(f), used(u)
    {}
};

void main(void) {
    int N;
    vector<nform> *v = new vector<nform>();

    cin >> N;
    v->push_back(nform("a", 1));
    while (--N) {
        vector<nform> *nv = new vector<nform>();

        for (auto it = v->begin(); it != v->end(); it++) {
            int alphabet = it->used + 1;
            for (int i = 0; i < alphabet; i++) {
                char append = 'a' + i;
                nv->push_back(nform(
                    it->form + append,
                    it->used + (i == it->used)
                ));
            }
        }

        delete v; v = nv;
    }

    for (auto it = v->begin(); it != v->end(); it++) {
        cout << (it->form) << '\n';
    }
}

}

int main(void) {
    cin.sync_with_stdio(false); cin.tie(0);
    cout << fixed << setprecision(COUT_PRECISION);
    abreto::main();
    return 0;
}
