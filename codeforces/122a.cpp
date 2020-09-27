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
    vector<int> lucky{4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    cin >> n;
    string ans = "NO";
    for (int x : lucky)
    {
        if (n % x == 0)
        {
            ans = "YES";
            break;
        }
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