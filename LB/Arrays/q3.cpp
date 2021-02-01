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

int kMax(vector<int> &v, int k)
{
  int vecSize = (int)v.size();
  if (vecSize - k - 1 >= 0)
  {
    return v[vecSize - k - 1];
  }
  return -1;
}

int kMin(vector<int> &v, int k)
{
  int vecSize = (int)v.size();
  if (k <= vecSize - 1)
  {
    return v[k - 1];
  }
  return -1;
}

int main()
{
  int n, k;
  vector<int> v;

  cin >> n;
  cin >> k;
  populateList(v, n);

  sort(v.begin(), v.end());

  cout << "Kth max element from beginning is " << kMax(v, k) << " and K min is " << kMin(v, k) << endl;
  return 0;
}
