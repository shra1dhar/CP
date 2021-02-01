#include <bits/stdc++.h>
using namespace std;

void fetchInputs(vector<int> &v, int n)
{
  int inp;
  for (int i = 0; i < n; ++i)
  {
    cin >> inp;
    v.push_back(inp);
  }
}

bool isPresent(vector<int> &v, int num)
{
  int low = 0, high = (int)v.size() - 1;
  while (low <= high)
  {
    int mid = low + (high - low) / 2;
    if (num == v[mid])
    {
      return true;
    }
    else if (num < mid)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return false;
}

void printList(vector<int> v)
{
  for (auto i : v)
  {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  int n, m;
  vector<int> v1, v2;

  cin >> n;
  fetchInputs(v1, n);

  cin >> m;
  fetchInputs(v2, m);

  vector<int> intersectionList;
  for (int i = 0; i < n; i++)
  {
    if (isPresent(v2, v1[i]))
    {
      intersectionList.push_back(v1[i]);
    }
  }
  printList(intersectionList);

  vector<int> unionList;
  for (auto a : v1)
  {
    unionList.push_back(a);
  }
  for (auto b : v2)
  {
    if (!isPresent(v1, b))
    {
      unionList.push_back(b);
    }
  }
  printList(unionList);

  return 0;
}
