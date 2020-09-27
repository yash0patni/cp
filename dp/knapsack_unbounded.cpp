#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int knapsack(vector<int>& val, vector<int>& wt, int w, int n, vector<vector<int>>& dp)
{
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < w + 1; j++)
        {
            int p1 = 0;
            if (wt[i-1] <= j)
            {
                dp[i][j] = max(val[i-1] + dp[i][j-wt[i-1]], dp[i-1][j]);
            }
            else
            {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][w];
}

void print(vector<vector<int>>& dp)
{
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[i].size(); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

void solve()
{
    int n, w;
    cin >> n >> w;
    vector<int> val(n);
    vector<int> wt(n);
    fo (n) cin >> val[i];
    fo (n) cin >> wt[i];
    
    vector<vector<int>> dp(n+1, vector<int>(w+1, -1));
    for (int i = 0; i < n + 1; i++)
        dp[i][0] = 0;
    for (int i = 0; i < w + 1; i++)
        dp[0][i] = 0;
    
    cout << knapsack(val, wt, w, n, dp) << endl;
    print(dp);
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}