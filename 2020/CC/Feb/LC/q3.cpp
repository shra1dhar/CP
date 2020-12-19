#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testcases;
  long int sumTotal = 0;
  cin >> testcases;

  while (testcases != 0)
  {
    testcases -= 1;

    int movieMatrix[4][4] = {0};
    vector<int> mock1;
    vector<int> mock2;
    int scores[] = {100, 75, 50, 25};
    char movie;
    int time, N;
    long int total = 0;
    int movieIndex = 0;
    int max = -1, prevMax = -1;
    int x = 0, y = 0;
    int bigX = 0, bigY = 0, prevX = 0, prevY = 0;

    cin >> N;

    for (int i = 0; i < N; ++i)
    {
      cin >> movie;
      if (movie == 0)
      {
        total = -400;
        break;
      }
      else
      {
        cin >> time;
      }
      if (movie == 'A')
        x = 0;
      else if (movie == 'B')
        x = 1;
      else if (movie == 'C')
        x = 2;
      else if (movie == 'D')
        x = 3;

      if (time == 12)
        y = 0;
      else if (time == 3)
        y = 1;
      else if (time == 6)
        y = 2;
      else if (time == 9)
        y = 3;

      movieMatrix[x][y] += 1;
    }

    for (int a = 0; a < 4; a++)
    {
      if (total == -400) break;
      for (int i = 0; i < 4; i++)
      {
        for (int j = 0; j < 4; j++)
        {
          if (movieMatrix[i][j] > max)
          {
            prevMax = max;
            prevX = bigX;
            prevY = bigY;
            max = movieMatrix[i][j];
            bigX = i;
            bigY = j;
          }
        }
      }

      // if (prevMax = max) {
      //   for(int q = 0; q < 4; q++) {
      //   }
      // }

      if (max <= 0)
      {
        total -= 100;
      }
      else
      {
        total += (max * scores[a]);
      }
      max = -1;

      // reduce row and coloumn to -1;
      for (int i = 0; i < 4; i++)
      {
        movieMatrix[bigX][i] = -1;
        movieMatrix[i][bigY] = -1;
      }
    }
    cout << total << endl;
    sumTotal += total;
  }
  cout << sumTotal << endl;
  return 0;
}
