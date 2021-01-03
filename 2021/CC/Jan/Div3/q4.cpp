#include <bits/stdc++.h>
using namespace std;

bool isClockwiseDirectiton(long int x, long int y)
{
  return y > x;
}

pair<long int, long int> getBackwardsExtrapolatedPoints(long int x, long int y)
{
  if (isClockwiseDirectiton)
  {
    return make_pair(0, abs(x - y));
  }
  else
  {
    make_pair(abs(y - x), 0);
  }
}

void printPoints(long int x, long int y)
{
  cout << x << " " << y << endl;
}

int main()
{
  int testcases;
  cin >> testcases;

  while (testcases--)
  {
    long int N, K, x, y;
    cin >> N >> K >> x >> y;

    if (x == y)
    {
      printPoints(N, N);
      continue;
    }

    bool isClockwise = isClockwiseDirectiton(x, y);
    pair<int, int> points = getBackwardsExtrapolatedPoints(x, y);

    // one of them is zero rn
    long int distance = max(points.first, points.second);
    long int remDistance = N - distance;
    long int collisions = K <= 4 ? K : K % 4;
    long int finalX, finalY;

    switch (collisions)
    {
    case 1:
      finalX = isClockwise ? remDistance : N;
      finalY = isClockwise ? N : remDistance;
      break;
    case 2:
      finalX = isClockwise ? N : remDistance;
      finalY = isClockwise ? remDistance : N;
      break;
    case 3:
      finalX = isClockwise ? distance : 0;
      finalY = isClockwise ? 0 : distance;
      break;
    case 4:
      finalX = isClockwise ? 0 : distance;
      finalY = isClockwise ? distance : 0;
      break;
    }
    printPoints(finalX, finalY);
  }
  return 0;
}
