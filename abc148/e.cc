/* AtCoder Beginner Contest 148. Task E - Double Factorial. */
#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto {

typedef long long int ll;

ll N;

ll answer(void) {
    if (N & 1) return 0;

    ll ans = 0;
    N /= 2;
    while (N > 4) {
        N /= 5;
        ans += N;
    }
    return ans;
}

void main(void) {
    cin >> N;
    cout << answer() << '\n';
}

}

int main(void) {
    cin.sync_with_stdio(false); cin.tie(0);
    cout << fixed << setprecision(COUT_PRECISION);
    abreto::main();
    return 0;
}
