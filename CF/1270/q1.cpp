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
    int n, k1, k2;
    cin >> n >> k1 >> k2;

    int highestK1 = -1;
    int highestK2 = -1;
    int inp;

    for (int i = 0; i < k1; i++)
    {
      cin >> inp;
      if (highestK1 < inp)
        highestK1 = inp;
    }

    for (int j = 0; j < k2; j++)
    {
      cin >> inp;
      if (highestK2 < inp)
        highestK2 = inp;
    }

    if (highestK1 > highestK2)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
  return 0;
}
