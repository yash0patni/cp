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
    ll n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 1 << endl;
    }
    else if (k <= (n+1)/2) {
        cout << 1 + 2 * (k-1) << endl;
    }else {
        k -= (n+1)/2;
        cout << 2 * k << endl;
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