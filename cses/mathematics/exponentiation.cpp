#include <bits/stdc++.h>
#define ll long long
#define testcase() ll t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
#define M 1000000007

using namespace std;
/*
3 4
9 2
81 1
*/
/*
ll power(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll tmp = power(a, b/2);
    ll result = tmp * tmp;
    if (b%2 == 1)
        result *= a;
    return result;
}
*/
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
    return result;
}

int main()
{
    testcase()
    {
        ll a, b;
        cin >> a >> b;
        cout << power(a,b) << endl;
    }
    return 0;
}