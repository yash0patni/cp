#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int dp[101][101];

int lcs(string& x, string& y, int n, int m)
{
    if (n == 0 || m == 0)
        return 0;
    if (dp[n][m] != -1)
        return dp[n][m];
    if (x[n-1] == y[m-1])
        return dp[n][m] = 1 + lcs(x,y,n-1,m-1);
    else
        return dp[n][m] = max(lcs(x,y,n-1,m), lcs(x,y,n,m-1));
}

void solve()
{
    //input
    int n, m;
    cin >> n >> m;
    string x, y;
    cin >> x;
    cin >> y;

    //lcs function
    int len = lcs(x,y,n,m);

    //output
    cout << len << endl;
}

int main()
{
    testcase()
    {
        memset(dp,-1,sizeof(dp));
        solve();
    }
    return 0;
}