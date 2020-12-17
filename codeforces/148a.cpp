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
    vector<int> arr(4);
    int d;
    fo(4)
        cin >> arr[i];
    cin >> d;
    vector<int> darr(d+1);
    fo(d+1)
        darr[i] = i;
    int cnt = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j < d+1; j++)
        {
            if (darr[j] && darr[j]%arr[i] == 0)
            {
                darr[j] = 0;
                cnt++; 
            }
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