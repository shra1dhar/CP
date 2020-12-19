#include <bits/stdc++.h>
#define boost                   \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
using namespace std;

int main()
{
  boost;
  long int testcases;
  cin >> testcases;
  while (testcases != 0)
  {
    testcases -= 1;
    int pairs = 0;
    int index = 1;
    int N, M, input;
    cin >> N >> M;
    int x1, x2, y1, y2, minDistance;
    vector<vector<int>> vect(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < M; j++)
      {
        cin >> input;
        vect[i][j] = input;
      }
    }

    for (int i = 1; i < N - 1; i++)
    {
      for (int j = 1; j < M - 1; j++)
      {
        x1 = i;
        x2 = N - i - 1;
        y1 = j;
        y2 = M - j - 1;
        minDistance = min(min(x1, x2), min(y1, y2));
        index = 1;
        while (index <= minDistance)
        {
          if ((vect[i - index][j] == vect[i + index][j]) && (vect[i][j - index] == vect[i][j + index]))
          {
            pairs += 1;
          }
          else
          {
            break;
          }
          index += 1;
        }
      }
    }
    cout << N * M + pairs << "\n";
    vect.clear();
  }
  return 0;
}
