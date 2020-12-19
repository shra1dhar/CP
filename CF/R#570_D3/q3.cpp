#include<bits/stdc++.h>
using namespace std;

// Equation obtained after solving ((a - b)*x1 + n*b) < k)
int main() {
    int Q;
    cin>>Q;
    while(Q != 0) {
        Q--;
        double k;
        long long int n, a, b;
        cin>>k>>n>>a>>b;

        int x1 = 0;
        k = (k - n*b);
        k = (double)k/(a-b);
        if(k <= 0)
            x1 = -1;
        else
            x1 = (k == floor(k)) ? (k - 1) : floor(k);

        if(x1 > n)
            x1 = n;

        cout<<x1<<endl;
    }
    return 0;       
}