#include <bits/stdc++.h>
using namespace std;

void populateList(vector<int> &v, int n)
{
  int inp;
  for (int i = 0; i < n; ++i)
  {
    cin >> inp;
    v.push_back(inp);
  }
}

int main()
{
  int n;
  vector<int> v;
  cin >> n;
  populateList(v, n);

  int min = INT_MAX;
  int max = INT_MIN;

  for (int j = 0; j < n; j++)
  {
    if (v[j] > max)
    {
      max = v[j];
    }
    if (v[j] < min)
    {
      min = v[j];
    }
  }

  cout << "Max is " << max << " and min is " << min << endl;

  return 0;
}
