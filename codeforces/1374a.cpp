#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void solve()
{
    ll x, y, n;
    cin >> x >> y >> n;
    ll ans = 0;
    if (n%x >= y)
    {
        ans = ((n/x) * x + y);
    }
    else
    {
        ans = (((n/x) - 1) * x + y);
    }
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