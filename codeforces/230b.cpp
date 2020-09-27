#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

ll n = 1000001;

vector<bool> arr(n, true);

void solve()
{
    set<ll> s;
    for (ll i = 2; i <= n; i++)
    {
        if (arr[i])
        {
            s.insert(i*i);
            /*if (i < 100)
                cout << i << " ";*/
            for (ll j = i * i; j <= n; j += i)
                arr[j] = false;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        
        if (s.find(a) != s.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}