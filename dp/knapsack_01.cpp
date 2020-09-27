#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int knapsack(vector<int>& val, vector<int>& wt, int i, int w, vector<vector<int>>& dp)
{
    if (i >= val.size() || w <= 0)
        return 0;
    if (dp[i][w] != -1)
        return dp[i][w];
    int p1 = 0;
    if (wt[i] <= w)
    {
        p1 = val[i] + knapsack(val, wt, i+1, w-wt[i], dp);
    }
    int p2 = knapsack(val, wt, i+1, w, dp);
    return dp[i][w] = max(p1, p2);
}

void solve()
{
    int n;
    cin >> n;
    int w;
    cin >> w;
    vector<int> val(n);
    vector<int> wt(n);
    fo (n)
        cin >> val[i];
    fo (n)
        cin >> wt[i];
    vector<vector<int>> dp(n+1, vector<int>(w+1, -1));
    cout << knapsack(val, wt, 0, w, dp) << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}