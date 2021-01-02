#include <bits/stdc++.h>
using namespace std;

void getList(vector<int> &v, int n, int *ref)
{
  int inp, sum = 0;
  for (int i = 0; i < n; ++i)
  {
    cin >> inp;
    sum += inp;
    v.push_back(inp);
  }
  *ref = sum;
}

int main()
{
  int testcases;
  cin >> testcases;

  while (testcases--)
  {
    int N, M;
    cin >> N >> M;

    int johnCount = 0;
    int jackCount = 0;
    vector<int> johnVotes, jackVotes;
    getList(johnVotes, N, &johnCount);
    getList(jackVotes, M, &jackCount);

    sort(johnVotes.begin(), johnVotes.end());
    sort(jackVotes.begin(), jackVotes.end(), greater<int>());

    vector<int> prefixArr;
    int lesserLength = min(johnVotes.size(), jackVotes.size());
    int swaps = 0;
    bool isImpossible = true;

    if (johnVotes.size() != 0)
    {
      for (int i = 0; i < lesserLength; i++)
      {
        if (i == 0 && johnCount > jackCount)
        {
          swaps = 0;
          isImpossible = false;
          break;
        }

        johnCount += jackVotes[i] - johnVotes[i];
        jackCount += johnVotes[i] - jackVotes[i];
        if ((johnCount - jackCount) > 0)
        {
          swaps = i + 1;
          isImpossible = false;
          break;
        }
      }
    }

    int result = isImpossible ? -1 : swaps;
    cout << result << endl;
  }
  return 0;
}
