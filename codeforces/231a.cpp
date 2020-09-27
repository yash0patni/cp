#include <bits/stdc++.h>
#define testcase() while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2)
            ans++;
    }
    cout << ans << endl;
}

int main()
{
    int t = 1;
    //cin >> t;
    testcase()
    {
        solve();
    }
    return 0;
}