#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int subset_sum(vector<int>& arr, int sum, vector<vector<int>>& dp)
{
    int n = arr.size();
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i-1] <= j)
                dp[i][j] = max(arr[i-1] + dp[i][j - arr[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
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
    int n, sum;
    cin >> n >> sum;
    vector<int> arr(n);
    fo (n) cin >> arr[i];
    vector<vector<int>> dp(n + 1, vector<int> (sum + 1, 0));
    subset_sum(arr, sum, dp);
    print(dp);
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}