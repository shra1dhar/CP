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
    int hh = 23, mm = 60;
    int timeLeft = 0;
    int inputHours, inputMinutes;

    cin >> inputHours >> inputMinutes;
    timeLeft = (hh - inputHours) * 60 + (mm - inputMinutes);

    cout << timeLeft << endl;
  }
  return 0;
}
