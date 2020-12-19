#include<iostream>
#include<functional>
using namespace std;

// // long sumOfSquares(int n);
// long sumOfSquares(int n) {
//     long sum = 0;
//     for(int i = 1; i<= n; i++) {
//         sum += i*i;
//     }
//     return sum;
// }

// // lambda function se krengay show-off abh :p
auto sumOfSquare = [](int n) { return ((n*(n+1)*(2*n + 1))/6); };

auto squareOfSum = [](int n) { return (n*(n+1)/2)*(n*(n+1)/2); };

// Main funtion
int main() {
    long num, res = 0;
    cin>>num;

    cout<<squareOfSum(num) - sumOfSquare(num)<<endl;
    return 0;
}