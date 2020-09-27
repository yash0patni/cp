#include <bits/stdc++.h>
#define ll long long
#define testcase() ll t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
#define M 1000000007

using namespace std;

ll power(ll a, ll b)
{
    ll result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            result = (result * a) % M;
        a = (a * a) % M;
        b /= 2;
    }
    return result % M;
}

ll fact(ll n)
{
    ll f = 1;
    for (ll i = 1; i <= n; i++)
    {
        f = (f * i) % M;
    }
    return f;
}

int main()
{
    //testcase()
    {
        ll n;
        cin >> n;
        cout << (fact(n) -  power(2,n-1) + M) % M << endl;
    }
    return 0;
}