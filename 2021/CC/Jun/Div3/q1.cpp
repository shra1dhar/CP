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
        int xa, xb, XA, XB;
        cin >> xa >> xb >> XA >> XB;

        cout << ceil(XA / xa) + ceil(XB / xb) << endl;
    }
    return 0;
}
