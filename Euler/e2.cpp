#include<iostream>
using namespace std;

int fib(int n) {
    int x = 1, y = 2;
    long res = 0, evenRes = 0;

    while(res < n){
        res = x + y;
        x = y;
        y = res;

        if(x%2 == 0)
            evenRes += x;

    }
    return evenRes;
}

int  main() {
    int input;
    cin>>input;

    cout<<fib(input)<<endl;
    return 0;
}