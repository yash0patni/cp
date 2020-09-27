#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int solve(int s, int n, int *coins, int target, vector<vector<int>>& dp)
{
    if (target == 0)
        return 1;
    if (s >= n || target < 0)
        return 0;
    if (dp[s][target] != -1)
        return dp[s][target];
    int l = solve(s, n, coins, target-coins[s], dp);
    int r = solve(s + 1, n, coins, target, dp);
    dp[s][target] = l + r;
    return dp[s][target];
}

int main()
{
    int n = 3;
    int coins[] = {1,3,4};
    int target = 6;
    vector<vector<int>> dp(n, vector<int>(target + 1, -1));
    cout << solve(0, n, coins, target, dp) << endl;
    return 0;
}