// Dice Combination
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> memo(n + 1, 0);
    memo[0] = 1;
    
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j < 7; j++) {
            if(j > i) {
                break;
            }
            memo[i] += memo[i - j];
        }
    }
    cout << memo[n] << endl;
}
