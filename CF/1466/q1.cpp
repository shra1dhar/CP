#include <bits/stdc++.h>
using namespace std;

void fillList(vector<int> &v, int n)
{
  int inp;
  for (int i = 0; i < inp; ++i)
  {
    cin >> inp;
    v.push_back(inp);
  }
}

int getDistinctBases(set<int> &s, vector<int> &v, int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      s.insert(v[j] - v[i]);
    }
  }
  return s.size();
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    int totalTrees;
    cin >> totalTrees;

    vector<int> v;
    fillList(v, totalTrees);

    set<int> s;
    cout << getDistinctBases(s, v, v.size()) << endl;
  }
  return 0;
}
