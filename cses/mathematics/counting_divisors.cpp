#include <bits/stdc++.h>
#define ll long long
#define testcase() ll t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
#define M 1000000007

using namespace std;

ll countDiv(ll n)
{
    ll count = 0;
    for (ll i = 1; i*i <= n; i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            {
                count += 1;
            }
            else
            {
                count += 2;
            }
        }
    }
    return count;
}

int main()
{
    testcase()
    {
        ll x;
        cin >> x;
        cout << countDiv(x) << endl;
    }
    return 0;
}