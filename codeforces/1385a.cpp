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
    vector<ll> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr.begin(), arr.end());
    if (arr[1] != arr[2])
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    cout << arr[0]  << " " << arr[0]  << " " << arr[2] << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}