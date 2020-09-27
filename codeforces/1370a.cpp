#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

void solve()
{
    ll n;
    cin >> n;
    ll m = LONG_MIN;
    for (ll i = 1; i <= n; i++)
    {
        m = max(m, gcd(i,i/2));
    }
    cout << m << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}