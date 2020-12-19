#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testcases;
  cin >> testcases;
  while (testcases != 0)
  {
    testcases -= 1;

    int N, P;
    int index = 0;
    long int input = 0;
    long int overPayingInput = 0;
    int remainder = 0;
    bool isOverPayed = false;

    cin >> N >> P;
    for (int i = 0; i < N; i++) {
      cin >> input;
      if (isOverPayed) continue;
      remainder = P % input;
      overPayingInput = input;
      if (remainder != 0) {
        index = i;
        isOverPayed = true;
      }
    }

    if (isOverPayed) {
      int lowerBound = 0;
      if (P > overPayingInput) {
        lowerBound = (P - remainder)/overPayingInput;
      }
      cout<< "YES" << " ";
      for (int i = 0; i < N; i++) {
        if (i == index) {
          cout << (lowerBound + 1);
        } else {
          cout << 0;
        }
        if (i != N-1) {
          cout << " ";
        }
      }
    } else {
      cout << "NO";
    }
    cout << endl;
  }
  return 0;
}
