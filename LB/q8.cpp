#include <bits/stdc++.h>
using namespace std;

void getInputs(vector<int> &v, int n)
{
  int inp;
  for (int i = 0; i < n; i++)
  {
    cin >> inp;
    v.push_back(inp);
  }
}

int maxSum(vector<int> &v, int n)
{
  int sum = 0, resultant = INT_MIN;
  for (int i = 0, j = 0; j < n; j++)
  {
    if (i <= j)
    {
      sum += v[j];
    }
    if (resultant < sum)
    {
      resultant = sum;
    }
    else
    {
    }
  }
}

int main()
{
  int n;
  vector<int> v;

  cin >> n;
  getInputs(v, n);

  int sum = maxSum(v, n);
  cout << "Max sum is " << sum << endl;
  return 0;
}
