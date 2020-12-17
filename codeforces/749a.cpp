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
    cout << n/2 << endl;
    fo(n/2 - 1)
        cout << 2 << " ";
    (n&1) ? cout << 3 << endl : cout << 2 << endl;   
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}