#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

ll Floor(ll *A, ll l, ll r, ll key) 
{ 
    ll m; 
    while( r - l > 1 ) 
    { 
        m = l + (r - l)/2; 
  
        if( A[m] <= key ) 
            l = m; 
        else
            r = m; 
    }
    return l; 
}

ll Floorx(ll *A, ll l, ll r, ll key) 
{ 
    ll m; 
    while( r - l > 1 ) 
    { 
        m = l + (r - l)/2; 
  
        if( A[m] <= key && key > 2 * A[m])
        { 
            l = m; 
        }
        else
            r = m; 
    }
    return l; 
}

void solve()
{
    ll n;
    ll x;
    cin >> n >> x;
    ll pop[n];
    for (ll i = 0; i < n; i++)
        cin >> pop[i];
    sort(pop, pop + n);
    if (pop[0] == pop[n-1]) // for subtask 1
    {
        ll num = pop[0];
        if (x >= num)
        {
            cout << n << endl;
            return;
        }
        if (x >= (num + 1) / 2)
        {
            cout << n + 1 << endl;
            return;
        }
        ll cnt = 0;
        while (x < (num + 1) / 2)
        {
            cnt++;
            x *= 2;
        }
        cout << cnt + n + 1 << endl;
    }
    else // for subtask 2
    {
        if (x >= pop[n-1])
        {
            cout << n << endl;
            return;
        }
        ll l = 0;
        ll days = 0;
        ll extday = 0;
        ll mx = pop[n-1];
        if (x > 2 * pop[0])
        {
            ll f = Floorx(pop, 0, n, x);
            extday += f - l + 1;
            l = f + 1;
        }
        while (l < n)
        {
            while (l < n && pop[l] <= x)
            {
                ll f = Floor(pop, l, n, x);
                x = min(2 * x, 2 * pop[f]);
                days += f - l + 1;
                l = f + 1;
            }
            while (l < n && x < pop[l])
            {
                x = min(pop[n-1], x * 2);
                days++;
            }
        }
        cout << days + extday << endl;
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