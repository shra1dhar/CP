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

class cmp
{
public:
    bool operator()(pair<string, int> p1, pair<string, int> p2)
    {
        if (p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second < p2.second;
    }
};

class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> mp;

        for (auto elem : words)
        {
            mp[elem]++;
        }

        priority_queue<pair<string, int>, vector<pair<string, int>>, cmp> pq;

        for (auto it : mp)
        {
            pq.push({it.first, it.second});
        }

        vector<string> result;

        int count = k;
        while (count--)
        {
            result.push_back(pq.top().first);
            pq.pop();
        }
        return result;
    }
};
