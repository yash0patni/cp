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
    ll x;
    cin >> x;
    int cnt = 0;
    while (x)
    {
        cnt += x&1;
        x >>= 1;
    }
    cout << cnt << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}