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
    int n, a, b;
    cin >> n >> a >> b;
    string s = "";
    for (int i = 0; i < b; i++)
    {
        s += 'a' + i;
    }
    string st = "";
    for (int i = 0; i < n/b + 1; i++)
        st += s;

    cout << st.substr(0,n) << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}