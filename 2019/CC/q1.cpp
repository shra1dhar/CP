#include<bits/stdc++.h>
using namespace std;;

int binaryIndexCalc(const vector<pair<int, int>> &v, int N, int sum){
    int low = v[0].first;
    int high = v[N].first;

    if(low == high)
        return 0;

    while(low < high) {
        int mid = (low+high)/2;
        if((sum == v[mid].first)) {
            cout<<"Mid "<<v[mid].first<<endl;
            return v[mid].second;
        }
        if(((sum == v[mid].first) && (high-low) != 1) || (sum < v[mid].first)){
            high = mid;
        }
        else {
            low = mid;
        }
    }
    return -1;
}

int main() {
    int T;
    cin>>T;
    while(T!=0) {
        T--;
        int N, inp;
        cin>>N;

        vector < pair <int, int> > v;
        int sum = 0;

        for(int i = 0; i<N; i++){
            cin>>inp;
            v.push_back(make_pair(inp,i+1));
            sum += inp;
        }

        // for(int i = 0; i<N; i++){
        //     cout<<"first "<<v[i].first<<endl;
        //     cout<<"second "<<v[i].second<<endl;
        // }
        // cout<<sum<<endl;
        // sum = sum/N;
        // cout<<sum<<endl;
        sort(v.begin(), v.end());
        int ans = binaryIndexCalc(v, N-1, sum);

        if(ans == -1)
            cout<<"Impossible"<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;   
}