/* AtCoder Panasonic Programming Contest 2020. Task B. */
#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto {

typedef long long int ll;

void main(void) {
    ll H, W;

    cin >> H >> W;

    if (1 == H || 1 == W) {
        cout << "1\n";
        return;
    }

    ll line_odd = (W + 1) >> 1;
    ll line_even = W >> 1;

    ll n_lines_odd = (H + 1) >> 1;
    ll n_lines_even = H >> 1;

    ll total = line_odd * n_lines_odd + line_even * n_lines_even;

    cout << total << '\n';
}

}

int main(void) {
    cin.sync_with_stdio(false); cin.tie(0);
    cout << fixed << setprecision(COUT_PRECISION);
    abreto::main();
    return 0;
}
