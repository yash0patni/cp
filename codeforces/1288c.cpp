#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

vector<ll> f(1200, 1);

ll C(ll n, ll k)
{
    /*ll ans = 1;
    if (k > n-k)
        k = n-k;
    
    for (ll i = 1; i <= k; i++)
    {
        ans = (ans * (n-i+1)) % mod;

        ans = (ans / i) % mod;
    }

    return ans % mod;*/
    return (f[n] / ((f[n-k] * f[k]) % mod)) % mod;
}



void fact()
{
    for (int i = 2; i < 1200; i++)
        f[i] = (i * f[i-1]) % mod;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    fact();
    cout << C(2*m+n-1, n-1) << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}