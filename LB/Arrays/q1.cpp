#include <bits/stdc++.h>
using namespace std;

int main()
{
  int size_of_list = 0;
  int inp;
  vector<int> v;

  cin >> size_of_list;
  for (int i = 0; i < size_of_list; ++i)
  {
    cin >> inp;
    v.push_back(inp);
  }

  for (int i = 0, j = size_of_list - 1; i < j; i++, j--)
  {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
  }

  for (auto pt : v)
  {
    cout << pt << " ";
  }
  return 0;
}
