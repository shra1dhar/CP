#include <bits/stdc++.h>
using namespace std;

int main()
{
  int testcases;
  cin >> testcases;
  vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
                    'l', 'm', 'n', 'o', 'p'};

  while (testcases--)
  {
    string codedString;
    int codeLen;
    cin >> codeLen;
    cin >> codedString;

    int codeIteration = codedString.length() / 4;
    vector<char> decodedString;
    for (int i = 0; i < codeIteration; i++)
    {
      int startPoint = i * 4;
      string slicedCode = codedString.substr(startPoint, 4);

      int index = stoi(slicedCode, 0, 2);
      decodedString.push_back(v[index]);
    }

    for (auto s : decodedString)
    {
      cout << s;
    }
    cout << endl;
  }
  return 0;
}
