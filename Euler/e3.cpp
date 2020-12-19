#include<iostream>
#include<cmath>
using namespace std;

long primeFactor(long n) {
    long lpf;
    long range = sqrt(n);

    while(n%2 == 0) {
        n /= 2;
        lpf = 2;
    }

    for(long i = 3; i < range; i = i+2) {
        if(n%i == 0) {
            n /= i;
            lpf = i;
        }
    }
    return lpf;
}

int main() {
    long n;
    cin>>n;

    cout<<primeFactor(n)<<endl;
    return 0;
}
