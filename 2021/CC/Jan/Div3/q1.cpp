#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testcases;
  cin >> testcases;

  while (testcases--)
  {
    int N, K, D;
    cin >> N >> K >> D;
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
      int inp;
      cin >> inp;
      sum += inp;
    }

    cout << min(D, sum / K) << endl;
  }
  return 0;
}
