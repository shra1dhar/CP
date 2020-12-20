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

void printList(int a, int num)
{
  while (a--)
  {
    cout << num << " ";
  }
  cout << endl;
}

int main()
{
  int n, zeroCount = 0, oneCount = 0, twoCount = 0;
  vector<int> v;
  cin >> n;
  populateList(v, n);

  for (int i = 0; i < n; i++)
  {
    if (v[i] == 0)
    {
      zeroCount++;
    }
    if (v[i] == 1)
    {
      oneCount++;
    }
    if (v[i] == 2)
    {
      twoCount++;
    }
  }
  printList(zeroCount, 0);
  printList(oneCount, 1);
  printList(twoCount, 2);

  return 0;
}
