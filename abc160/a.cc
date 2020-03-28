/* A - Coffee */
#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto
{

void main(void)
{
    char s[6];
    cin >> s;
    cout << ((s[2] == s[3] && s[4] == s[5]) ? "Yes" : "No") << '\n';
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
