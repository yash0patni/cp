#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void solve(int c)
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll,ll>> arr(n);
    ll a,b;
    fo(n)
    {
        cin >> a >> b;
        arr[i] = {a,b};
    }
    sort(arr.begin(), arr.end());
    ll res = 0;
    ll s = 0, e, d;

    for (int i = 0; i < n; )
    {
        res++;
        pair<ll,ll> t = arr[i];
        s = max(t.first, s);
        e = t.second;
        d = s + k;
        if (e > d)
        {
            while (e > d)
            {
                s = d;
                d = s + k;
                res++;
            }
            s = d;
            //cout << s << endl;
            i++;
            while (i < n && arr[i].second <= d)
                i++;
        }
        else
        {
            i++;
            while (i < n && arr[i].second <= d)
                i++;
            s = d;
        }
    }

    cout << "Case #" << c << ": " << res << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}