#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a%b);
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll a = -1, b = -1;
    if (2 * l <= r)
    {
        a = l;
        b = 2 * l;
    }
    cout << a << " " << b << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}