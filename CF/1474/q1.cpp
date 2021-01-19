#include <bits/stdc++.h>
using namespace std;

string getMaxInteger(string str, int n)
{
  string newStr = "1";
  for (int i = 1; i < n; i++)
  {
    int sumOld = stoi(string(1, str[i - 1])) + stoi(string(1, newStr[i - 1]));
    int newNum = stoi(string(1, str[i]));

    if ((sumOld == 2 && newNum == 0) || (sumOld == 0) || (sumOld == 1 && newNum == 1))
    {
      newStr += '1';
    }
    else
    {
      newStr += '0';
    }
  }
  return newStr;
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    string a;
    int n;
    cin >> n >> a;
    cout << getMaxInteger(a, n) << endl;
  }
  return 0;
}
