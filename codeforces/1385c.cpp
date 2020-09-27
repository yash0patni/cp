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
    vector<int> arr(n);
    fo (n)
        cin >> arr[i];
    bool flag = true;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            flag = false;
            break;
        }
    }
    int ans = 0;
    if (flag)
    {
        cout << ans << endl;
        return;
    }
    int i;
    for (i = n-1; i > 0; i--)
    {
        if (arr[i] > arr[i-1])
        {
            break;
        }
    }
    int j;
    for (j = i; j > 0; j--)
    {
        if (arr[j] < arr[j-1])
        {
            break;
        }
    }
    cout << j << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}