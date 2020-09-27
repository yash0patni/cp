#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int res = INT_MAX;
    int arr[n];
    fo(n)
        cin >> arr[i];
    sort(arr, arr+n);
    for (int i = 0; i < n-1; i++)
    {
        res = min(res, arr[i+1] - arr[i]);
    }
    cout << res << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}