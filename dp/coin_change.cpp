#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int solve(int s, int n, int *coins, int target)
{
    if (target == 0)
        return 1;
    if (s >= n || target < 0)
        return 0;
    return solve(s, n, coins, target-coins[s]) + solve(s + 1, n, coins, target);
}

int main()
{
    int n = 3;
    int coins[] = {1,3,4};
    int target = 6;
    cout << solve(0, n, coins, target) << endl;
    return 0;
}