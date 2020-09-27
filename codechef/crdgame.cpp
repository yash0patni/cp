#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

ll digitsum(ll n)
{
    ll ans = 0;
    while (n)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    ll a, b;
    ll acnt, bcnt;
    acnt = bcnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        ll ap = digitsum(a);
        ll bp = digitsum(b);
        if (ap == bp)
        {
            acnt += 1;
            bcnt += 1;
        }
        else if (ap > bp)
        {
            acnt += 1;
        }
        else
        {
            bcnt += 1;
        }
    }
    if (acnt == bcnt)
    {
        cout << "2 " << acnt << endl;
    }
    else if (acnt > bcnt)
    {
        cout << "0 " << acnt << endl;
    }
    else
    {
        cout << "1 " << bcnt << endl;
    }
    
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}