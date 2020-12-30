
#include <bits/stdc++.h>
using namespace std;

void fillList(vector<int> &v, int n)
{
  int inp;
  for (int i = 0; i < n; ++i)
  {
    cin >> inp;
    v.push_back(inp);
  }
}

int getDistinctMelodies(set<int> &s, vector<int> &v, int n)
{
  sort(v.begin(), v.end());

  if (v.size() < 1)
  {
    return v.size();
  }

  s.insert(v[0]);
  for (int i = 1; i < n; i++)
  {
    if (v[i] == v[i - 1])
    {
      s.insert(v[i] + 1);
      v[i] += 1;
    }
    else
    {
      s.insert(v[i]);
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
    int melodyCount;
    cin >> melodyCount;

    vector<int> v;
    fillList(v, melodyCount);

    set<int> s;
    cout << getDistinctMelodies(s, v, v.size()) << endl;
  }
  return 0;
}
