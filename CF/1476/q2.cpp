#include <iostream>
#include <cmath>
using namespace std;

int solve(int n, int k)
{
  if(n == k) {
    return 1;
  }
  else if(n < k) {
    return floor(k/n) + 1;
  }
  else {
      int rem = k % n;
      return floor(k/n) + rem;
  }
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n, k;
    cin >> n >> k;
    cout << solve(n, k) << endl;
  }
  return 0;
}
