#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int testcases;
  cin >> testcases;
  while (testcases != 0)
  {
    testcases -= 1;
    int S, W1, W2, W3;

    cin >> S >> W1 >> W2 >> W3;
    if ((W1 + W2 + W3) <= S)
    {
      cout << "1\n";
    }
    else if (min(W1 + W2, W2 + W3) <= S)
    {
      cout << "2\n";
    }
    else
    {
      cout << "3\n";
    }
  }
  return 0;
}
