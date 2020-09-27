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
    ll arr[n];
    ll sum = 0;
    fo(n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    ll ans = 0;
    if (sum%3 != 0)
        cout << ans << endl;
    else
    {
        ll s = sum/3;
        ll sl = 0;
        ll sr = 0;
        int i, j;
        for (i = 0, j = n-1; i < j; )
        {
            if (sl == s && sr == s)
            {
                i++;
                j--;
                ans++;
                break;
            }
            if (sl < s)
            {
                sl += arr[i];
                if (sl < s)
                    i++;                
            }
            if (sr < s)
            {
                sr += arr[j];
                if (sr < s)
                    j--;
            }
        }
        sl += arr[i];
        sr += arr[j];
        while (i <= j && sl == s)
        {
            i++;
            sl += arr[i];
            ans++;
        }
        while (i <= j && sr == s)
        {
            j--;
            sr += arr[j];
            ans++;
        }
        cout << ans << endl;
    }
    
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}