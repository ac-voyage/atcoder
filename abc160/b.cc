#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto
{

typedef long long int ll;

void main(void)
{
    ll X;
    cin >> X;
    ll hap = 0ll;
    hap += (X / 500) * 1000;
    X -= (X / 500) * 500;
    hap += (X / 5) * 5;
    cout << hap << '\n';
}

} // namespace abreto

int main(void)
{
    cin.sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(COUT_PRECISION);
    abreto::main();
    return 0;
}
