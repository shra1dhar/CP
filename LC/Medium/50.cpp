// 50. Pow(x, n)
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

class Solution
{
public:
    double fastPow(double base, long p)
    {
        if (p == 0)
            return 1.0;

        double half = fastPow(base, p / 2);

        if (p % 2 == 0)
        {
            return half * half;
        }
        return half * half * base;
    }

    double myPow(double x, int n)
    {
        long power = abs(n);
        bool isNegative = n < 0;

        return isNegative ? 1 / fastPow(x, power) : fastPow(x, power);
    }
};