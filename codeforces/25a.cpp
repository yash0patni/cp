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
    int even = 0;
    int odd = 0;
    fo(n)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    int rem;
    if (even == 1)
        rem = 0;
    else
        rem = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == rem)
        {
            cout << (i+1) << endl;
            break;
        }
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