#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char> (m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][m-1] == 'R')
            cnt++;
    }
    for (int j = 0; j < m; j++)
    {
        if (arr[n-1][j] == 'D')
            cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}