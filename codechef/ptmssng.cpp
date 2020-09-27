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
    ll p;
    cin >> p;
    ll n = 4*p - 1;
    ll resx, resy;
    resx = resy = 0;
    ll x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        resx ^= x;
        resy ^= y;
        
    }
    cout << resx << " " << resy << endl;
}

/*
2,1 
1,1 1,2

3,4 3,7
1,4 1,7

1,1 - 1,2||1,1 - 1,2||1,1 - 1,4||1,1 - 1,7||
*/

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}