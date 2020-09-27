#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n&1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}