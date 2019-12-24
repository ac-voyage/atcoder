/* AtCoder Beginner Contest 148. Task D - Brick Break. */
#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto {

const int MAXN = 200200;

int N;

void main(void) {
    int p = 0, remaining = 0, ai;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> ai;
        if (ai == p + 1) {
            p++;
            remaining++;
        }
    }

    if (remaining)
        cout << (N - remaining);
    else
        cout << "-1";

    cout << '\n';
}

}

int main(void) {
    cin.sync_with_stdio(false); cin.tie(0);
    cout << fixed << setprecision(COUT_PRECISION);
    abreto::main();
    return 0;
}
