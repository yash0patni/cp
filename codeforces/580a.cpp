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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    ll ans = 0;
    ll a = 1;
    for (ll i = 0; i < n-1; i++)
    {
        if (arr[i+1] >= arr[i])
        {
            a++;
            ans = max(a, ans);
        }
        else
        {
            a = 1;
        }
    }
    cout << max(ans,a) << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}