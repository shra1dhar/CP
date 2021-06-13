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

int getMin(int a, int b)
{
    if (a == -1 || b == -1)
    {
        return max(a, b);
    }
    return min(a, b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int inp, N, M;
        cin >> N >> M;

        vector<int> A, right;
        vector<int> left(N, 0);

        for (int i = 0; i < N; i++)
        {
            cin >> inp;
            A.push_back(inp);
        }

        bool trainAvailable = false;
        int distance = 0;
        for (int i = 0; i < N; i++)
        {
            if (i == 0)
            {
                right.push_back(0);
            }

            if (A[i] == 1)
            {
                trainAvailable = true;
                if (i != 0)
                    right.push_back(0);
                distance = 0;
            }
            else if (A[i] == 2)
            {
                if (i != 0)
                    right.push_back(1e8);
            }
            else if (!trainAvailable)
            {
                if (i != 0)
                    right.push_back(-1);
            }
            else
            {
                if (i != 0)
                {
                    distance++;
                    right.push_back(distance);
                }
            }
        }

        trainAvailable = false;
        distance = 0;
        for (int i = N - 1; i >= 0; i--)
        {
            if (i == 0)
            {
                left[i] = 0;
                break;
            }

            if (A[i] == 2)
            {
                trainAvailable = true;
                left[i] = 0;
                distance = 0;
            }
            else if (A[i] == 1)
            {
                left[i] = 1e8;
            }
            else if (!trainAvailable)
            {
                left[i] = -1;
            }
            else
            {
                distance++;
                left[i] = distance;
            }
        }

        // Solving for query
        for (int i = 0; i < M; i++)
        {
            cin >> inp;
            cout << getMin(left[inp - 1], right[inp - 1]);
            if (i != M - 1)
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
