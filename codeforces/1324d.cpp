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
    cin >> n;
    int arr[n];
    int brr[n];
    fo (n) cin >> arr[i];
    fo (n) cin >> brr[i];
    vector<int> c(n);
    fo (n)
        c[i] = arr[i] - brr[i];
    sort(c.begin(), c.end());

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (c[i] > 0)
        {
            int v = 1 - c[i];
            int j = lower_bound(c.begin(), c.end(), v) - c.begin();
            ans += i - j;
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