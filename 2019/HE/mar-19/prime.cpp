#include <iostream>
#include <set>
using namespace std;
 
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
    set< long int> storePrime;
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
 
        if (storePrime.find(n + 1) != storePrime.end())
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
 
int main()
{
 
    calculatePrime(111000);
    return 0;
}
