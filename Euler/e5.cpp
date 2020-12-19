#include <iostream>
#include <set>
#include <cmath>
using namespace std;

int smallestNumber(const bool *arr, int n)
{
    int res = 1;
    set<int> s;

    for (int i = 2; i < n; ++i)
    {
        if (arr[i] == true)
        {
            int j = i;
            while (j <= n)
                j *= i;

            j = j/i;
            s.insert(j);
        }
    }

    for (auto k = s.begin(); k != s.end(); k++)
        res *= *k;

    return res;
}

int isPrime(int n)
{
    bool arr[n + 1];
    for (int i = 0; i < n+1; ++i)
        arr[i] = true;

    // Sieve approach
    for (int i = 2; i < (n+1)/2; ++i)
    {
        int j = i;
        if (arr[i] == false){
            continue;
        }
        else {
            // (arr[j] == true)
            while (j <= n)
            {
                j += i;
                arr[j] = false;
            }
        }
    }

    // calling method to use prime numbers
    return smallestNumber(arr, n+1);
}

int main()
{
    int inp;
    cin >> inp;

    cout << isPrime(inp) << endl;
    return 0;
}