
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testcases;
  int N;
  int input;
  long int sum;
  cin >> testcases;

  while (testcases)
  {
    testcases -= 1;
    sum = 0;
    cin >> N;
    int v1[N + 1];
    int v2[N + 1];

    for (int i = 0; i < N; i++)
    {
      cin >> v1[i];
    }

    for (int j = 0; j < N; j++)
    {
      cin >> v2[j];
    }

    sort(v1, v1 + N);
    sort(v2, v2 + N);

    for (int k = 0; k < N; k++)
    {
      sum += min(v1[k], v2[k]);
    }

    cout << sum << endl;
  }
  return 0;
}
