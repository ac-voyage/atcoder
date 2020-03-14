/* AtCoder Panasonic Programming Contest 2020. Task C. */
#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto {

typedef long long int ll;

char const *judge(ll a, ll b, ll c) {
    ll d = c - a - b;
    if (d <= 0) return "No";
    ll l = 4ll * a * b;
    ll r = d * d;
    if (l >= r) return "No";
    return "Yes";
}

void main(void) {
    ll a, b, c;
    cin >> a >> b >> c;
    cout << judge(a, b, c) << '\n';
}

}

int main(void) {
    cin.sync_with_stdio(false); cin.tie(0);
    cout << fixed << setprecision(COUT_PRECISION);
    abreto::main();
    return 0;
}
