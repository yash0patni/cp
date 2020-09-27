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

void printsol(vector<vector<int>> &sol)
{
    int n = sol.size();
    cout << "Solution - " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << sol[i][j] << "\t";
        }
        cout << endl;
    }
}

int findway(vector<vector<int>> &maze, int i, int j, int n, string path, vector<vector<int>> &sol)
{
    if (i == n || j == n || i == -1 || j == -1 || maze[i][j] == 0)
        return -1;
    //printsol(sol);
    if (i == n-1 && j == n-1)
    {
        paths.push_back(path);
        sol[i][j] = 1;
        return 1;
    }
    if (sol[i][j] == 2)
    {
        return -1;
    }
    int temp = sol[i][j];
    sol[i][j] = 2;
    int down = findway(maze, i+1, j, n, path + "D", sol);
    int left = findway(maze, i, j-1, n, path + "L", sol);
    int right = findway(maze, i, j+1, n, path + "R", sol);
    int up = findway(maze, i-1, j, n, path + "U", sol);
    sol[i][j] = temp;
    if (right == 1 || down == 1 || left == 1 || up == 1)
    {
        sol[i][j] = 1;
        return 1;
    }
    else
        return -1;
}

void solve()
{
    paths.clear();
    int n;
    cin >> n;
    vector<vector<int>> maze(n, vector<int> (n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> maze[i][j];

    vector<vector<int>> sol(n, vector<int> (n, 0));

    int ans = findway(maze, 0, 0, n, "", sol);

    if (ans == -1)
    {
        cout << "-1" << endl;
        return;
    }

    //printsol(sol);

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