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
    ll n, l;
    cin >> n >> l;
    vector<ll> arr(n);
    fo(n)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    double diff = LONG_MIN;
    double d;
    for (int i = 0; i < n-1; i++)
    {
        d = (double)(arr[i+1] - arr[i]) / 2;
        diff = max(diff, d);
    }
    if (arr[0] != 0)
        diff = max(diff, (double)arr[0]);
    if (arr[n-1] != l)
        diff = max(diff, (double)(l - arr[n-1]));
    cout << fixed << setprecision(10) << diff << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}