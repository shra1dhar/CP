#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <algorithm>
#include <climits>
#include <string>
#include <queue>
#include <list>
#include <unordered_map>
#include <map>
#include <vector>
#include <utility>
using namespace std;

long long fastPower(long long base, long long power)
{
    const unsigned int MOD = 1e9 + 7;

    if (power == 0)
    {
        return 1;
    }

    if (base == 0)
    {
        return 0;
    }

    long long temp = fastPower(base, power / 2);

    if (power & 1)
    {
        return temp * temp * base % MOD;
    }
    else
    {
        return temp * temp % MOD;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        long long N, M;
        cin >> N >> M;

        long long base = fastPower(2, N) - 1;
        cout << fastPower(base, M) << endl;
    }
    return 0;
}
