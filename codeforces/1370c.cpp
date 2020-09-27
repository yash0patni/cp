#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

ll countones(ll n)
{
    ll cnt = 0;
    while (n)
    {
        cnt = n & 1;
        n >>= 1;
    }
    return cnt;
}

void solve()
{
    ll n;
    cin >> n;  
    if (n == 1)
    {
        cout << "FastestFinger" << endl;
        return;
    }
    if (n == 2)
    {
        cout << "Ashishgup" << endl;
        return;
    }

    bool odd = n&1;

    for (ll i = 3; !odd && i*i <= n; ++i)
    {
        if (n % i == 0 && (i&1 || (n/i)&1))
        {
            cout << "Ashishgup" << endl;
            return; 
        }
    }

    if (!odd)
        cout << "FastestFinger" << endl;
    else
        cout << "Ashishgup" << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}