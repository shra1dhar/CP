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

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        unsigned long long D, d, P, Q;
        cin >> D >> d >> P >> Q;

        unsigned long long n = D / d;
        unsigned long long remDays = D % d;
        unsigned long long total = 0;

        if (n % 2 == 0)
        {
            total = (d * n * (2 * P + (n - 1) * Q)) / 2;
        }
        else
        {
            total = d * (n * (P + ((n - 1) / 2) * Q));
        }

        total += remDays * (P + (n * Q));
        cout << total << endl;
    }
    return 0;
}
