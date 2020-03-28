#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto
{

const int maxn = 2048;

int N, X, Y;
int cnt[maxn];

void count(void)
{
    for (int i = 1; i < N; i++)
        for (int j = i + 1; j <= N; j++)
        {
            int d = min(j - i, abs(X - i) + abs(j - Y) + 1);
            cnt[d]++;
        }
}

void main(void)
{
    cin >> N >> X >> Y;
    if (X > Y)
        swap(X, Y);
    count();
    for (int k = 1; k < N; k++)
        cout << cnt[k] << '\n';
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
