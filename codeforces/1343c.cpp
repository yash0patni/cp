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
    ll arr[n];
    fo(n)
        cin >> arr[i];
    int i = 0;
    ll mx, mn;
    ll sum = 0;
    while(i < n)
    {
        mx = LONG_MIN;
        while (i < n && arr[i] < 0)
        {
            mx = max(mx, arr[i]);
            //deb(arr[i]);
            i++;
        }
        //deb(mx);
        if (mx != LONG_MIN)
            sum += mx;
        mn = LONG_MIN;
        while (i < n && arr[i] > 0)
        {
            mn = max(mn, arr[i]);
            //deb(arr[i]);
            i++;
        }
        //deb(mn);
        if (mn != LONG_MIN)
            sum += mn;
    }
    //deb(sum);
    cout << sum << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}