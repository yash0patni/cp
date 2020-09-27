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
    ll n, m, a;
    cin >> n >> m >> a;
    ll tiles = ((n+a-1)/a) * ((m+a-1)/a);
    cout << tiles << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}