#include <bits/stdc++.h>
using namespace std;

long long getMaximizingProduct(int n)
{
  int num1 = n + 1;
  if (n > 2 && num1 % 2)
  {
    num1 += 1;
  }
  int num2 = num1 + n;
  if (n > 2 && num2 % 2)
  {
    num2 += 1;
  }
  return num1 * num2;
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    cin >> n;
    cout << getMaximizingProduct(n) << endl;
  }
  return 0;
}
