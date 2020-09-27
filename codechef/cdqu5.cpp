#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000009

using namespace std;

vector<ll> cnt(1000000,-1);

ll dp(ll x)
{
    if (x < 2)
        return 0;
    if (x <= 3)
        return cnt[x];
    if (cnt[x] > 0)
        return cnt[x];
    cnt[x] = ( dp(x-2) + dp(x-3) ) % mod;
    return cnt[x];
}

void solve()
{
    ll x;
    cin >> x;
    cout << dp(x) << endl;
}

int main()
{
    cnt[2] = 1;
    cnt[3] = 1;
    testcase()
    {
        solve();
    }
    return 0;
}