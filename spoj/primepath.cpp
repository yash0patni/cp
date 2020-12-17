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

bool isPrime(int n)
{
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

void generatePrimes(vector<int>& primes)
{
    for (int j = 1000; j <= 9999; j++)
        if (isPrime(j))
            primes.push_back(j);
}

bool isValidEdge(int a, int b)
{
    int count = 0;
    while (a > 0 && b > 0)
    {
        int na = a % 10;
        int nb = b % 10;
        if (na != nb) count++;
        a /= 10;
        b /= 10;
    }
    return (count == 1);
}

void bfs(int source, vector<vector<int>>& arr, vector<int>& vis, vector<int>& dist)
{
    queue<int> q;
    q.push(source);
    dist[source] = 0;
    vis[source] = 1;

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

void solve(vector<vector<int>>& arr)
{
    int source, target;
    cin >> source >> target;
    /*
    for (int child : arr[source])
    {
        cout << child << " ";
    }
    cout << endl;
    */
    vector<int> dist(10000);
    vector<int> vis(10000);

    bfs(source, arr, vis, dist);

    if (dist[target] || source == target)
    {
        cout << dist[target] << endl;
    }
    else
    {
        cout << "Impossible" << endl;
    }
}

int main()
{
    vector<int> primes;
    generatePrimes(primes);

    vector<vector<int>> arr(10000);

    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = i+1; j < primes.size(); j++)
        {
            int u = primes[i];
            int v = primes[j];
            if (isValidEdge(u, v))
            {
                arr[u].push_back(v);
                arr[v].push_back(u);
            }
        }
    }

    testcase()
    {
        solve(arr);
    }

    return 0;
}