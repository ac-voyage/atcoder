/* AtCoder Grand Contest 041. Task .A */
#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto {

typedef long long int ll;

ll N, A, B;

void main(void) {
    ll ans = 0x3f3f3f3f3f3f3f3f;
    cin >> N >> A >> B;
    ll diff = B - A;
    if (0 == (diff & 1ll)) {
        ans = diff >> 1;
    } else {
        diff = (diff - 1) >> 1;
        ans = min(A, N - B + 1) + diff;
    }
    cout << ans << '\n';
}

}

int main(void) {
    cin.sync_with_stdio(false); cin.tie(0);
    cout << fixed << setprecision(COUT_PRECISION);
    abreto::main();
    return 0;
}
