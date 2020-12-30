#include <bits/stdc++.h>
using namespace std;

int getChangeCount(string &str)
{
  int len = str.length();
  map<int, bool> m;
  int count = 0;
  for (int i = 0; i < len; i++)
  {
    int left = i;
    int right = i;

    while (left > -1 && right < len)
    {
      left--;
      right++;
      if (m.find(left) == m.end() && m.find(right) == m.end() && m.find(i) == m.end() && m.find(i + 1) == m.end())
      {
        if ((left >= 0) && (str[left] == str[right]))
        {
          m[i] = true;
          count++;
        }
        else if (str[i] == str[i + 1])
        {
          m[i] = true;
          m[i + 1] = true;
          count++;
        }
        else
        {
          break;
        }
      }
    }
  }
  return count;
}

int main()
{
  int n;
  cin >> n;

  while (n--)
  {
    string str;
    cin >> str;
    cout << getChangeCount(str) << endl;
  }
}
