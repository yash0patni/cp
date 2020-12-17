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
    fo(n)
        cin >> arr[i];
    
    ll mn = LONG_MAX;
    ll mx = 0;

    fo(n)
    {
        if (arr[i] < mn) mn = arr[i];
        if (arr[i] > mx) mx = arr[i];
    }
    cout << mx-mn << " ";
    ll cnt1 = 0, cnt2 = 0;
    fo(n)
    {
        cnt1 += (arr[i] == mn);
        cnt2 += (arr[i] == mx);
    }
    if (mn == mx)
        cout << n * (n-1) / 2;
    else
        cout << cnt1 * cnt2;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}