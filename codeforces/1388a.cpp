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
    int n;
    cin >> n;
    if (n <= 30)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << "6 10 14 " << n - 30 << endl;
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