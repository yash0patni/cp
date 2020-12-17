#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mod 1000000007

using namespace std;

bool dfs(int node, int c, vector<vector<int>>& arr, vector<int>& vis, vector<int>& col)
{
    vis[node] = 1;
    col[node] = c;
    for (int child : arr[node])
        if (!vis[child])
        {
            if (dfs(child, c^1, arr, vis, col) == false)
                return false;
        }
        else
        {
            if (col[node] == col[child])
                return false;
        }
    return true;
}

void solve(int t)
{
    int n, m, u, v;
    cin >> n >> m;
    vector<vector<int>> arr(n+1);
    vector<int> vis(n+1);
    vector<int> col(n+1);
    fo(m)
    {
        cin >> u >> v;
        arr[u].pb(v);
        arr[v].pb(u);
    }

    bool ans = true;

    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, 1, arr, vis, col) == false)
            {
                ans = false;
                break;
            }
        }
    }

    cout << "Scenario #" << t << ":" << endl;
    ans ? cout << "No suspicious bugs found!" << endl : cout << "Suspicious bugs found!" << endl;
}

int main()
{
    //testcase()
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        solve(j+1);
    }
    return 0;
}