#include <iostream>
#include<cstring>
#include <vector>
using namespace std;

// Calculate next multiple
int nextMultiple(int divisor, int dividend)
{
    int rem, quotient;
    rem = dividend % divisor;
    if (rem == 0)
        return dividend;

    quotient = dividend / divisor;
    return ((divisor * quotient) + rem);
}

// To find the nth prime number
int segmentedSieve(int n)
{
    bool arr[10010], flag = true;
    vector<int> v;

    //Defining the start point
    int sieveStart = 20, start = 1, end = 10010, k;

    // push_backing prime numbers from 1-20
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(11);
    v.push_back(13);
    v.push_back(17);
    v.push_back(19);

    vector<int>::iterator itr = v.begin();

    while (v.size()< n)
    {
        memset(arr, true, 10010*arr[0]);

        for (auto j = v.begin(); j != v.end(); ++j)
        {

            if (flag)
            {
                for (auto i = v.begin(); i != v.end(); ++i)
                    arr[*i] = false;
                flag = false;
            }

            k = *j;
            if (k < sieveStart)
            {
                k = nextMultiple(k, sieveStart);
            }

            while (k <= end)
            {
                arr[k] = false;
                k += *j;
            }
        }

        // for (int i = 1; i < 5000; i++)
        // {
        //     if (arr[i] == false)
        //         continue;
        //     else
        //     {
        //         int l = i;
        //         if (l < sieveStart)
        //         {
        //             l = nextMultiple(k, sieveStart);
        //         }
        //         while (l <= end)
        //         {
        //             arr[l] = false;
        //             l += i;
        //         }
        //     }
        // }

        for (int i = 1; i < 10010; i++)
        {
            int sum = i + start;
            if(sum == 1)
                continue;
            if (arr[i] == true)
                v.push_back(sum);
        }

        // sieveStart = end;
        // start = end + 1;
        // end += end;
        start = end;
        end += end;
    }
    return v[n];
}

int main()
{
    int num;
    cin >> num;

    cout << segmentedSieve(num) << endl;
    return 0;
}