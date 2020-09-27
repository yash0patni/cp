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
    ll a,b,x,y,n;
    cin >> a >> b >> x >> y >> n;
    ll ac,bc,xc,yc,nc;
    ac = a;
    bc = b;
    xc = x;
    yc = y;
    nc = n;

    ll d = a - x;
    if (n <= d)
    {
        a -= n;
    }
    else
    {
        a -= d;
        n -= d;
        ll d1 = b - y;
        if (n <= d1)
        {
            b -= n;
        }
        else
        {
            b -= d1;
            n -= d1;                
        }
    }
    ll ans1 = a * b;

    a = ac;
    b = bc;
    x = xc;
    y = yc;
    n = nc;

    d = b - y;
    if (n <= d)
    {
        b -= n;
    }
    else
    {
        b -= d;
        n -= d;
        ll d1 = a - x;
        if (n <= d1)
        {
            a -= n;
        }
        else
        {
            a -= d1;
            n -= d1;                
        }
    }
    ll ans2 = a * b;
    

    cout << min(ans1, ans2) << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}