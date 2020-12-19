#include <iostream>
#define boost                     \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

inline bool isDivisibleHelperFunction(int n)
{
    int mul = 3;
    int num = n + 1;
    while (n+1 > mul)
    {
        // if (num % mul == 0)
        //     num /= mul;
        // mul += 2;

        // if (num == 1)
        //     return true;
        if(num % mul == 0)
            return true;
        mul += 2;
    }
    return false;
}

bool isDivisible(long int n)
{

    if (!(n % 2 == 0))
    {
        return true;
    }

    // Base Case
    if (n == 2 || n == 4)
        return false;

    if (n == 3)
        return true;

    if (n % 6 == 0)
    {
        if (isDivisibleHelperFunction(n))
            return true;
        return false;
    }
    if ((n + 2) % 6 == 0)
    {
        if (isDivisibleHelperFunction(n))
            return true;
        return false;
    }
    return true;
}

int main()
{
    boost;
    int T;
    cin >> T;

    while (T > 0)
    {
        T--;

        long int n;
        cin >> n;

        if (isDivisible(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}