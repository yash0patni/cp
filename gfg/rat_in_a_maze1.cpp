#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

vector<string> paths;

int findway(vector<vector<int>> &maze, int i, int j, int n, string path)
{
    if (i == n || j == n)
        return -1;
    if (maze[i][j] == -1)
        return -1;
    if (i == n-1 && j == n-1)
    {
        paths.push_back(path);
        maze[i][j] = 1;
        return 1;
    }
    int right = findway(maze, i, j+1, n, path + "R");
    int down = findway(maze, i+1, j, n, path + "D");
    if (right == -1 && down == -1)
        return -1;
    if (right == 1 || down == 1)
    {
        maze[i][j] = 1;
        return 1;
    }
    else
    {
        //maze[i][j] = 0;
        return -1;
    }
    
}

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> maze(n, vector<int> (n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> maze[i][j];

    int ans = findway(maze, 0, 0, n, "");

    if (ans == -1)
    {
        cout << "-1" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << maze[i][j] << "\t";
        }
        cout << endl;
    }

    for (string path : paths)
    {
        cout << path << endl;
    }
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}

//
