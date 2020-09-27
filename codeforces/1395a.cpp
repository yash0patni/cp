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
    ll r, g, b, w;
    cin >> r >> g >> b >> w;
    if (r%2 == 0 && g%2 == 0 && b%2 == 0 && w%2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else if (r&1 && g&1 && b&1)
    {
        cout << "YES" << endl;
        return;
    }
    int cnt = (r&1) + (g&1) + (b&1);
    //deb(cnt);
    if (r > 0 && g > 0 && b > 0 && (cnt == 2) && (w&1))
    {
        cout << "YES" << endl;
        return;
    }
    else if (cnt == 1 && w%2 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    else if (cnt == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
        return;
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