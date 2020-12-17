#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define pb push_back
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void dfs(int node, vector<vector<int>>& arr, vector<int>& vis)
{
    vis[node] = 1;
    for (int child : arr[node])
        if (!vis[child])
            dfs(child, arr, vis);
}

void solve()
{
    int n, m, u, v;
    cin >> n >> m;
    vector<vector<int>> arr(n+1);
    vector<int> vis(n+1);
    fo(m)
    {
        cin >> u >> v;
        arr[u].pb(v);
        arr[v].pb(u);
    }
    string ans = "";
    int cc = 0;
    for (int i = 1; i <= n; i++)
    {
        if (cc > 1)
        {
            ans = "NO";
            break;
        }
        if (!vis[i])
        {
            cc++;
            dfs(i, arr, vis);
        }
    }

    if (ans == "" && m == n-1)
    {
        ans = "YES";
    }
    else
    {
        ans = "NO";
    }
    
    cout << ans << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}