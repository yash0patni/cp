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
    ll a, b, n, m;
    //a vanila
    //b choclate
    cin >> a >> b >> n >> m;
    if (m > min(a,b))
    {
        cout << "No" << endl;
        return;
    }    
    if (n + m > a + b)
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}