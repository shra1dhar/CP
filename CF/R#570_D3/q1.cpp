#include<bits/stdc++.h>
using namespace std;

int digiSum(int num) {
    int addNum = 0;
    int rem = 0;
    while(num > 0) {
        rem = num%10;
        addNum += rem;
        num /= 10;
    }
    return addNum;
}

int main() {
    int a, num;
    cin>>a;
    
    num = digiSum(a);

    while(true) {
        if(num % 4 == 0)
            break;
        else
            num = digiSum(++a);
    }
    cout<<a<<endl;
    return 0;
}