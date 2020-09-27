#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int m, n;
    cin >> m >> n;
    int res = 0;
    res = (m/2 * n) + (m%2 * n/2);
    cout << res << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}