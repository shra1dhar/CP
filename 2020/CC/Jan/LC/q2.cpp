#include <bits/stdc++.h>
using namespace std;

int main()
{
  long int testcases;
  cin >> testcases;
  while (testcases != 0)
  {
    testcases -= 1;
    int N, result;
    long long A, B, C, D, E, S;
    cin >> N >> A;
    long long maxPossibleInput = pow(10, N);
    S = 2 * maxPossibleInput + A;
    cout << S << endl;
    cin >> B;
    C = maxPossibleInput - B;
    cout << C << endl;
    cin >> D;
    E = maxPossibleInput - D;
    cout << E << endl;
    cin >> result;
    if (result == -1)
    {
      break;
    }
  }
  return 0;
}
