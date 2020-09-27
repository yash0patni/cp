#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll cnt = 0;
    while (a <= n && b <= n)
    {
        if (a < b)
            a += b;
        else
            b += a;
        cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}