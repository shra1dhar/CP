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
        int D, d, P, Q;
        cin >> D >> d >> P >> Q;

        int n = floor(D / d);
        int remDays = D % d;

        int firstHalf = (d * (n) * (2 * P + (n - 1) * Q)) / 2;
        int secondHalf = remDays * (P + (n)*Q);
        int total = firstHalf + secondHalf;
        cout << total << endl;
    }
    return 0;
}
