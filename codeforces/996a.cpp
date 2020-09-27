#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    int den[5] = {1,5,10,20,100};
    int res = 0;
    for (int i = 4; i >= 0; i--)
    {
        res += n / den[i];
        n %= den[i];
    }
    cout << res << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}