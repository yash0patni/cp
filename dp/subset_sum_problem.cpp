#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

bool subset_sum(vector<int>& arr, int sum, vector<vector<bool>>& dp)
{
    int n = arr.size();
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i-1] <= j)
                dp[i][j] = (dp[i-1][j - arr[i-1]] || dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][sum];
}

bool subset_sum(vector<int>& arr, int sum, int n, vector<vector<int>>& dp)
{
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;
    if (dp[n][sum] != -1)
        return dp[n][sum];
    if (arr[n-1] <= sum)
    {
        return dp[n][sum] = subset_sum(arr, sum - arr[n-1], n-1, dp) || subset_sum(arr, sum, n-1, dp);
    }
    else
    {
        return dp[n][sum] = subset_sum(arr, sum, n-1, dp);
    }
}

void print(vector<vector<bool>>& dp)
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
    int n;
    cin >> n;
    vector<int> arr(n);
    int total = 0;
    fo (n)
    {
        cin >> arr[i];
        total += arr[i];
    }
    int sum = total / 2;
    if (sum != total - sum)
    {
        cout << "NO" << endl;
        return;
    }
    /*
    vector<vector<bool>> dp(n + 1, vector<bool> (sum + 1, false));
    for (int i = 0; i < sum + 1; i++)
        dp[0][i] = false;
    for (int i = 0; i < n + 1; i++)
        dp[i][0] = true;
    if (subset_sum(arr, sum, dp))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    */
    vector<vector<int>> dp(n + 1, vector<int> (sum + 1, -1));
    if (subset_sum(arr, sum, n, dp))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}