#include <bits/stdc++.h>
using namespace std;

int main()
{
	int testcases;
	int score;
	int questionNumber;
	int noOfTries = 0;
	cin >> testcases;
	int scoringArray[9] = {0};

	while (testcases != 0)
	{
		testcases -= 1;
		int sum = 0;
		cin >> noOfTries;
		for (int i = 0; i < noOfTries; i++) {
			cin >> questionNumber >> score;
			if (score > scoringArray[questionNumber] && questionNumber <= 8) {
				scoringArray[questionNumber] = score;
			}
		}

		for (int j = 1; j != 9; j++) {
			sum += scoringArray[j];
		}
		cout << sum << endl;

		for (int k = 0; k < 9; k++) {
			scoringArray[k] = 0;
		}
	}

  return 0;
}
