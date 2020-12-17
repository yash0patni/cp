#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mod 1000000007

using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll x = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((a >> i)&1 && (b >> i)&1)
        {
            x += (1 << i);
        }
    }
    //cout << x << endl;
    ll ans = (a^x) + (b^x);
    cout << ans << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}