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
    ll n;
    cin >> n;
    ll ans = 0;
    while (n != 1)
    {
        if (n > 1000000000)
        {
            ans = -1;
            break;
        }
        if (n % 6 == 0)
        {
            n /= 6;
            ans++;
        }
        else
        {
            n *= 2;
            ans++;
        }
        //deb(n);
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