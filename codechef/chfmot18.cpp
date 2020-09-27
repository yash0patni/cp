#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

void solve()
{
    ll s, n;
    cin >> s >> n;
    ll res = 0;
    ll d = 2;
    for (ll i = n; i >= 2; )
    {
        res += s / i;
        s = s % i;
        if (s & 1)
            i = (i - max(i - (s-1), d));
        else
            i = (i - max((i - s), d));
    }
    cout << res + s << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}