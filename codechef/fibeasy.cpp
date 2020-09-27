#include <bits/stdc++.h>
#include <cmath>
#define lli long long int
using namespace std;

const int N = 60; // after 60 it is repeating

int fib[N] = {0,1};

void generateFib()
{
    for (lli i = 2; i < N; i++)
    {
        fib[i] = (fib[i-1] + fib[i-2]) % 10;
    }
}

void print(lli n)
{
    for (lli i = 0; i < n; i++)
    {
        cout << fib[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    lli n;
    generateFib();
    cin >> t;
    while (t--)
    {
        cin >> n;
        n = floor(log2(n));
        n = 1 << n;
        //cout << f << endl;
        cout << fib[(n-1) % 60] << endl;
        //print(n);
        
        /*
        if (n == 1)
            cout << fib[0] << endl;
        else
        {
            if (n % 2 == 0)
                cout << fib[n-1] << endl;
            else
                cout << fib[n-2] << endl;
        }
        */
        /*
        if (n == 1)
            cout << fib[0] << endl;
        else
        {
            int arr[n];
            for (lli i = 0; i < n; i++)
            {
                arr[i] = fib[i];
            }
            lli k = 0;
            while (k != 1)
            {
                //cout << k << endl;
                k = 0;
                for (lli i = 1; i < n; i += 2)
                {
                    arr[k++] = arr[i];
                }
                n = n/2;
                //cout << n << endl;
            }
            cout << arr[0] << endl;
        }
        */
    }
    return 0;
}