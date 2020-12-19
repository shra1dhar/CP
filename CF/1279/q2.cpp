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
    int numberToSkip = 0;
    int total = 0;
    int j = 0;
    int inp;
    int index = 0;

    cin >> n >> s;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
      cin >> inp;
      arr[i] = inp;
    }

		numberToSkip = arr[0];
    for (j = 0; j < n; j++)
    {
      total += arr[j];

      if ((total - numberToSkip) >= s)
      {
        break;
      }

      if (numberToSkip < arr[j])
      {
        numberToSkip = arr[j];
        index = j + 1;
      }
    }

    if (j == n)
    {
      index = 0;
    }

    cout << index << endl;
  }
  return 0;
}
