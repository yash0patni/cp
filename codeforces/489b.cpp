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
    int m;
    cin >> m;
    vector<int> brr(m);
    fo (m)
        cin >> brr[i];
    
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    int cnt = 0;

    for (int i = 0, j = 0; i < n && j < m; )
    {
        if (abs(arr[i] - brr[j]) <= 1)
        {
            i++;
            j++;
            cnt++;
        }
        else if (arr[i] - brr[j] < 0)
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    cout << cnt << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}