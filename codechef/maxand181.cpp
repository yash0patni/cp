#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

bool comp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.second < b.second;
}

ll power[31];

void in()
{
    ll i;
	power[0]=1;
	for(i=1;i<=30;i++){
	    power[i]=2*power[i-1];
	}
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    fo (n)
        cin >> arr[i];
    ll count[31];
    fo (31)
        count[i] = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = arr[i];
        ll j = 0;
        while (x)
        {
            if (x&1)
                count[j]++;
            x >>= 1;
            j++;
        }
    }

    /*
    fo(31)
        cout << count[i] << " ";
    cout << endl;
    */

    vector<pair<ll,ll>> v;
    for (ll i = 0; i < 31; i++)
        v.push_back(make_pair(count[i] * power[i], i));
    
    sort(v.begin(), v.end());
    /*
    for (pair<ll,ll> p : v)
        cout << 50 - p.first << " ";
    cout << endl;
    for (pair<ll,ll> p : v)
        cout << p.second << " ";
    cout << endl;
    */
    ll ans = 0;
    for (ll i = 30; i > 30 - k; i--)
    {
        ans += power[v[i].second];
    }
    cout << ans << endl;
}   

int main()
{
    in();
    testcase()
    {
        solve();
    }
    return 0;
}