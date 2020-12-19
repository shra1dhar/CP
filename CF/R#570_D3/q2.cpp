#include<bits/stdc++.h>
using namespace std;

int checkBounds(const vector<int> & v, int mid, int end, int k){
    int upperBound = v[0] + k;
    int lowerBound = v[end] - k;

    if(lowerBound <= upperBound)
        return upperBound;
    else 
        return -1;
}

int main() {
    int Q, n, k, inp;
    cin>>Q;
    while(Q != 0) {
        Q--;
        int ans;
        cin>>n>>k;
        vector<int> v;
        for(int i = 0; i<n; i++) {
            cin>>inp;
            v.push_back(inp);
        }

        sort(v.begin(), v.end());

        int mid1 = v[n/2];
        int mid2 = v[(n+1/2)];

        if( n & 1 )
            ans = checkBounds(v, mid2, n-1, k);
        else
            ans = max(checkBounds(v, mid2, n-1, k), checkBounds(v, mid1, n-1, k));
        
        cout<<ans<<endl;
    }
}