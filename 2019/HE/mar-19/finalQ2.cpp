#include <iostream>
#include <set>
using namespace std;

inline bool isDivisibleHelperFunction(int n, set<long int> &storePrime)
{
    // int mul = 3;
    // int num = n + 1;
    // while (n + 1 > mul)
    // {
    //     if (num % mul == 0)
    //         num /= mul;
    //     mul += 2;

    //     if (num == 1)
    //         return true;
    // }
    // return false;

    int mul = 3;
    int num = n + 1;
     while (n + 1 > mul)
    {
        if (num % mul == 0) {
            return true;
        }
        mul += 2;

    }
    return false;

    for(auto f: storePrime) {
        if(n % f == 0) {
            return true;
        }
    }
    return false;
}

bool isDivisible(long int n, set<long int> &storePrime)
{
    if (n % 6 == 0)
    {
        if (isDivisibleHelperFunction(n+1, storePrime))
            return true;
        return false;
    }
    if ((n + 2) % 6 == 0)
    {
        if (isDivisibleHelperFunction(n+1, storePrime))
            return true;
        return false;
    }
    return true;
}

bool containsPrime(long int num, set<long int> &storePrime)
{
    for (auto st : storePrime)
    {
        if (num % st == 0)
        {
            return false;
        }
    }
    return true;
}

void calculatePrime(long int n)
{
    long int num = 1;
    set<long int> storePrime;
    storePrime.insert(2);
    storePrime.insert(3);
    while (num + 4 < n)
    {
        num += 4;
        if (containsPrime(num, storePrime))
            storePrime.insert(num);

        num += 2;
        if (containsPrime(num, storePrime))
            storePrime.insert(num);
    }
    int T;
    cin >> T;
    while (T > 0)
    {
        T--;

        long long int n;
        cin >> n;

        if (!(n % 2 == 0))
        {
            cout << "YES" << endl;
            continue;
        }

        if (n < 11100)
        {
            if (isDivisible(n, storePrime))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

        else
        {
            if (storePrime.find(n + 1) != storePrime.end())
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
}

int main()
{
    calculatePrime(111000);
    return 0;
}