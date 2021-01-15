#include <bits/stdc++.h>
using namespace std;

bool getMinSum(int elementCount, int d)
{
  int min1 = INT_MAX, min2 = INT_MAX;
  int maxNum = INT_MIN;
  int inp;
  vector<int> v;
  for (int i = 0; i < elementCount; ++i)
  {
    cin >> inp;
    v.push_back(inp);
  }

  sort(v.begin(), v.end());
  min1 = v[0];
  for (auto a : v)
  {
    if (a != min1)
    {
      min2 = a;
      break;
    }
  }

  maxNum = v[elementCount - 1];

  if (maxNum <= d)
    return true;
  if (min2 == INT_MAX)
    return false;
  return (min1 + min2) <= d;
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, d;
    cin >> n >> d;

    // int minVal = getMinSum(n, d);

    string result = getMinSum(n, d) ? "YES" : "NO";
    cout << result << endl;
  }
  return 0;
}
