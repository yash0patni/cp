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
    ll a, b;
    cin >> a >> b;
    ll n = abs(a-b);
    ll ans = 0;

    for (int i = 10; i > 0; i--)
    {
        ans += n / i;
        n = n % i;
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