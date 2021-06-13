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

unsigned long long fastPower(long long base, long long power)
{
    const unsigned int MOD = 1e9 + 7;

    if (power == 0)
    {
        return 1;
    }

    unsigned long long temp = fastPower(base, power / 2);
    unsigned long long moddedSquare = (temp * temp) % MOD;
    if (power & 1)
    {
        return moddedSquare * (base % MOD);
    }
    else
    {
        return moddedSquare;
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        unsigned long long N, M;
        cin >> N >> M;

        unsigned long long base = fastPower(2, N) - 1;
        cout << fastPower(base, M) << endl;
    }
    return 0;
}
