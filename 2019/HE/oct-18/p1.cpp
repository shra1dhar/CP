#include <bits/stdc++.h>
#define mem(n,m) memset(n,m,sizeof(n))
#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define PI 3.1415926535897932384626433832795028841971693993751
using namespace std;

int main()
{
    boost;
    int T;
    cin>>T;
    set<int> st;
    while(T != 0){
        T--;
        int j = 0;
        int N, a, b, marks;
        cin>>N>>a>>b;
        
        for(int i = 0; i<=N; i++){
            for(int j = 0; j + i <= N; j++ ) {
                marks = a*i - b*j;
                st.insert(marks);
            }
        }
        cout<<st.size()<<endl;
        st.clear();
    }
    
    return 0;
}