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
    string s;
    cin >> s;
    int n = s.length();
    if (n <= 10) cout << s << endl;
    else cout << s[0] << n-2 << s[n-1] << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}