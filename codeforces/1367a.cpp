#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    string s;
    cin >> s;
    string ans = "";
    int n = s.length();
    for (int i = 0; i < n; i+= 2)
    {
        ans += s[i];
    }
    ans += s[n-1];
    cout << ans << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}