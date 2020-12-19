// Is string unique ?
#include <bits/stdc++.h>
using namespace std;

// Approach 1 - Set
bool isStringUnique1(string inpString)
{
  set<char> stringSet;
  int strSize = inpString.size();
  for (char const &c : inpString)
  {
    stringSet.insert(c);
  }

  if (stringSet.size() != strSize)
  {
    return false;
  }
  return true;
}

// Approach #2 Hash
bool isStringUnique2(string inpString)
{
  int hashArray[256] = {0};
  for (char const &c: inpString) {
    hashArray[int(c)] += 1;
  }
  for (int i = 0; i < 256; i++) {
    if (hashArray[i] > 1) {
      return false;
    }
  }
  return true;
}

int main() {
  string inpString;
  cin>>inpString;
  int strSize = inpString.size();
  if (isStringUnique1(inpString)) {
    cout<<"First Method worked";
  }
  if (isStringUnique2(inpString)) {
    cout<<"Seconf Method worked";
  }
  return 0;
}
