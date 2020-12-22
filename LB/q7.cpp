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
  if (v.size())
  {
    temp = v[0];
  }

  for (int i = 1; i < n; i++)
  {
    swap(temp, v[i]);
  }

  if (v.size() > 1)
  {
    swap(temp, v[0]);
  }
  printList(v);
  return 0;
}
