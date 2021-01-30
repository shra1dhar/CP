#include <bits/stdc++.h>
using namespace std;

int solve(int n, int k)
{
  if(n == k) {
    return 1;
  }
  else if(n < k) {
    int rem = k%n;
    return (k-rem)/n;
  }
  else {
    return ceil(n/k)
  }
  return newStr;
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
