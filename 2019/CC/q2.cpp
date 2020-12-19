#include <bits/stdc++.h>
using namespace std;

long long int calculateChocolateDistribution1(long long int K, long long int N)
{
    long long int rem = N - K;
    if (N == K)
    {
        return N;
    }
    else
    {
        return (min(rem, K)) + 1;
    }
}

long long int calculateChocolateDistribution2(long long int K, long long int N)
{
    long long int rem = N % K;
    return min(rem, N - rem) + 1;
}
int main()
{
    int T;
    cin >> T;
    while (T != 0)
    {
        T--;
        long long int N, K;
        cin >> N >> K;

        if (K <= N)
            cout << calculateChocolateDistribution1(K, N) << endl;
        else
        {
            cout << calculateChocolateDistribution2(K, N) << endl;
        }
    }
    return 0;
}
