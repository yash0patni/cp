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
    int n;
    ll t;
    cin >> n >> t;
    vector<int> arr(n);
    fo (n) cin >> arr[i];

    int ans = 0;
    int l = 0, r = 0;

    while (r < n)
    {
        while (r < n && arr[r] <= t)
        {
            t -= arr[r];
            r++;
        }
        ans = max(ans, r - l);
        while (r < n && arr[r] > t)
        {
            t += arr[l];
            l++;
        }
    }

    cout << ans << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}