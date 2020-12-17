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

void bfs(vector<vector<int>>& arr, vector<int>& vis, vector<int>& dist)
{
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    vis[1] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (int child : arr[node])
        {
            if (!vis[child])
            {
                vis[child] = 1;
                q.push(child);
                dist[child] = dist[node] + 1;
            }
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

    vector<int> vis(n+1);
    vector<int> dist(n+1);

    bfs(arr, vis, dist);

    cout << dist[n] << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}