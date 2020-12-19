#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int n, inp;
    cin >> T;
    vector<int> v;
    while (T != 0)
    {
        T--;
        int val = 0, count = 0, index = 0;
        bool isValueSmaller;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> inp;

            if (v.size() >= 5)
            {
                v.erase(v.begin());
            }

            isValueSmaller = false;

            if (i == 0)
            {
                count++;
                v.push_back(inp);
                continue;
            }

            vector<int> v2(v);
            sort(v2.begin(), v2.end());

            if (inp < *v2.begin())
            {
                isValueSmaller = true;
            }

            if (isValueSmaller)
            {
                count++;
            }

            v.push_back(inp);
            isValueSmaller = false;
        }
        v.clear();
        cout << count << endl;
    }
    return 0;
}
