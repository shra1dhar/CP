#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int testcases;
  cin >> testcases;
  int n;
  int s;
  long int b;

  while (testcases != 0)
  {
    testcases -= 1;
    int n, inp;
    cin >> n;
    int lowIndex = 0, highIndex = 0;
    int low = 0, high = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> inp;
      if (low > inp)
      {
        low = inp;
        lowIndex = i + 1;
      }
      if (high < inp)
      {
        high = inp;
        highIndex = i + 1;
      }

      if ((high - low) >= (highIndex - lowIndex + 1))
      {
        cout << "YES\n";
        cout << min(lowIndex,highIndex) << " " << (max(lowIndex, highIndex)) << endl;
        break;
      }
    }
    cout << "NO\n";
    for (int j = max(lowIndex, highIndex) - 1; j < n; j++) {
      cin >> inp;
    }
  }
  return 0;
}
