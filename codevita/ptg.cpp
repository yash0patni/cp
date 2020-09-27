#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

ll factor(ll n)
{
    for(ll i = 2; i * i <= n; i++)
        if(n % i==0)
            return n / i;
    return 1;
}

void solve()
{
    ll m, n;
    cin >> m >> n;
    if(m < n)
    {
        ll t = m;
        m = n;
        n = t;
    }
    ll ans;
    if(m == n)
    {
        ans = 0;
    }
    else
    {
        map<ll,ll> mp;
        ll cnt = 0;
        while(m != 1)
        {
            cnt++;
            m = factor(m);
            mp[m] = cnt;
        }
        cnt = 0;
        while(mp.find(n) == mp.end())
        {
            cnt++;
            n = factor(n);
        }
        ans = cnt + mp[n];
    }
    cout << ans;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}