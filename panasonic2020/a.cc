/* AtCoder Panasonic Programming Contest 2020. Task A. */
#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto {

void main(void) {
    int K;

    vector<int> seq({1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51});
    // sort(seq.begin(), seq.end());
    cin >> K;
    cout << seq[K - 1] << '\n';
}

}

int main(void) {
    cin.sync_with_stdio(false); cin.tie(0);
    cout << fixed << setprecision(COUT_PRECISION);
    abreto::main();
    return 0;
}
