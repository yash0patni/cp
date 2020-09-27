#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

bool allk(ll *arr, ll n, ll k)
{
    fo(n)
        if (arr[i] % k != 0)
            return false;
    return true;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    fo(n)
        cin >> arr[i];
    ll rem[n];
    ll ak = 0;
    fo(n)
    {
        rem[i] = k - arr[i] % k;
        if (rem[i] % k == 0)
            rem[i] = 0;
    }

    sort(rem, rem+n);

    ll ans[n];

    if (allk(rem, n, k))
    {
        cout << 0 << endl;
        return;
    }

    ll i = 0;
    while(i < n && rem[i] == 0)
    {
        ans[i] = 0;
        i++;
    }
    for (; i < n; )
    {
        
        ll s = rem[i];
        ll j = i + 1;
        ans[i] = s;
        ll kc = 0;
        while (j < n && s == rem[j])
        {
            ++kc;
            ans[j] = s + kc * k;
            j++;
        }
        i = j;
    }
    ll mx = LONG_MIN;
    fo(n)
    {
        if (ans[i] > mx)
            mx = ans[i];
        //cout << ans[i] << " ";
    }
    //cout << endl;
    cout << mx + 1 << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}