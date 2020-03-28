#include <bits/stdc++.h>

using namespace std;

#define COUT_PRECISION 10

namespace abreto
{

const int maxn = 200200;

int K, N;
int A[maxn];

int minimum_distance(void)
{
    int minus = 0;
    for (int i = 0; i < N; i++)
    {
        int dis = 0;
        if (i == N - 1)
            dis = K + A[0] - A[N - 1];
        else
            dis = A[i + 1] - A[i];
        if (dis > minus)
            minus = dis;
    }
    return (K - minus);
}

void main(void)
{
    cin >> K >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cout << minimum_distance() << '\n';
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
