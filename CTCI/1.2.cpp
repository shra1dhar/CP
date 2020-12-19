// Are two strings permutation of each other ?

#include <bits/stdc++.h>
using namespace std;

bool isStringPermutation(string str1, string str2) {
  if (str1.size() != str2.size()) {
    return false;
  }
  sort(str1.begin(), str1.end());
  sort(str2.begin(), str2.end());

  for (int i = 0; i < str1.size(); i++) {
    if (str1[i] != str2[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  string str1, str2;
  cin>> str1 >>str2;

  if (isStringPermutation(str1, str2)) {
    cout<< "Yes, strings are permutation of each other" << endl;
  }
  return 0;
}