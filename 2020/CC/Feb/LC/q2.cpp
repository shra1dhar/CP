#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testcases;
  int input, N, K;
  long int total;
  cin >> testcases;

  while (testcases != 0)
  {
    testcases -= 1;
    total = 0;

    cin >> N >> K;

    for (int i = 0; i < N; i++)
    {
      cin >> input;
      total = (total + input) % K;
    }

    cout << total << endl;
  }
  return 0;
}
