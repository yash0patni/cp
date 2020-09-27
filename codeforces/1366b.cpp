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
    ll n, x, m;
    cin >> n >> x >> m;
    --x;
    ll ans = 0;
    ll l, r;
    while (m--)
    {
        cin >> l >> r;
        --l;
        --r;
        if (x >= l && x <= r)
        {
            ans += r - l + 1;
        }
    }
    deb(ans);
    //cout << ans << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}