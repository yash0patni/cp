#include <bits/stdc++.h>
#define lli long long int
using namespace std;

void find_divisors(lli n)
{
    int flag = 1;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            //cout << i << " ";
            //cout << n/i << " ";
            lli x = (i + n/i) / 2;
            lli y = i - x;
            if (y == 0)
            {
                flag = 0;
                cout << -1 << endl;
                break;
            }
            if ((x+y) * (x-y) == n)
            {
                cout << y*y << endl;
                break;
            }
            //cout << endl;
        }
    }
    //cout << endl;
    //if (flag == 0)
    //    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;
    lli n;
    while (t--)
    {
        cin >> n;
        find_divisors(n);
    }
    return 0;
}