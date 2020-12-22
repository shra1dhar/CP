#include <bits/stdc++.h>
using namespace std;

void getInputs(vector<int> &v, int n)
{
  int inp;
  for (int i = 0; i < n; ++i)
  {
    cin >> inp;
    v.push_back(inp);
  }
}

void printList(vector<int> &v)
{
  for (auto a : v)
  {
    cout << a << " ";
  }
}

int main()
{
  int n;
  vector<int> v;
  cin >> n;
  getInputs(v, n);

  int temp;
  for (int i = 0; i < n; i++)
  {
    if (i == n - 1)
    {
      swap(v[i], v)
    }
    int temp =
  }
  return 0;
}
