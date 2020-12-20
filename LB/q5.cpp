#include <bits/stdc++.h>
using namespace std;

void shiftNegativeNum(vector<int> &v, int n)
{
  for (int i = 0, j = 0; j < n; j++)
  {
    if (v[j] < 0 && i != j)
    {
      swap(v[i], v[j]);
      i++;
    }
  }
}

void populateList(vector<int> &v, int n)
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
  for (auto num : v)
  {
    cout << num << " ";
  }
}

int main()
{
  int n;
  vector<int> v;
  cin >> n;

  populateList(v, n);
  shiftNegativeNum(v, n);
  printList(v);
  return 0;
}
