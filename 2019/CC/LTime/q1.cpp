#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int n, m;
    cin >> T;
    set<int> st;
    while (T != 0)
    {
        T--;
        bool isFair = true;
        cin >> n >> m;

        int rem = 0, inp;
        if (m > n)
            rem = m % n;
        else
            rem = m;        

        for (int i = 1; i <= m; i++)
        {
            cin >> inp;
            st.insert(inp);
            if (i % n == 0)
            {
                if (n != st.size())
                {
                    isFair = false;
                }
                st.clear();
            }
            if (i == m)
                if (rem != st.size())
                    isFair = false;
        }
        if (isFair)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
