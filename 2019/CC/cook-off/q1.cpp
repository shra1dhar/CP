#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, index;
    cin >> T;
    int matchArray[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    while (T != 0)
    {
        T--;
        int a, b, c;
        int matchStickCount = 0;
        cin >> a >> b >> c;

        if ( a == (3*c - 2*b))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    return 0;
}
