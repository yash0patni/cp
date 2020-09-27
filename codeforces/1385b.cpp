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
    int n;
    cin >> n;
    vector<int> a(n+1, -1);
    int b;
    fo (2 * n)
    {
        cin >> b;
        if (a[b] == -1)
        {
            a[b] = 0;
            cout << b << " ";
        }
    }
    cout << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}