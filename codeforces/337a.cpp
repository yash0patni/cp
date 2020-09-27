#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    int f[m];
    fo(m)
        cin >> f[i];
    sort(f, f+m);
    int mindiff = INT_MAX;
    for (int i = n; i <= m; i++)
    {
        mindiff = min(f[i-1] - f[i - n], mindiff);
    }
    cout << mindiff << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}