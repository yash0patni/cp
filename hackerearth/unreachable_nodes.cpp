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

void dfs(int node, vector<vector<int>>& arr, vector<int>& vis)
{
    vis[node] = 1;
    for (int child : arr[node])
    {
        if (!vis[child])
        {
            dfs(child, arr, vis);
        }
    }
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n+1);
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }

    cin >> x;

    vector<int> vis(n+1);

    dfs(x, arr, vis);

    int count = 0;
    for (int i = 1; i <= n; i++)
        if (!vis[i]) count++;

    cout << count << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}