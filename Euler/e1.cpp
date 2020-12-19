#include <iostream>
using namespace std;

void shift(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Obviously you can just divide it directly and then subtract i/n1*n2 which is far better soulution
int main() {
    int n1, n2, range, ans = 0, i = 1;
    cin>>n1>>n2>>range;

    // Ensure n1 is greater than n2
    if(n2 > n1)
        shift(&n1, &n2);
    
    while(i < range)
    {
        if((i%n1==0) || (i%n2==0))
            ans += i;

        i++;
    }
    
    cout<<ans<<endl;
    return 0;
}

