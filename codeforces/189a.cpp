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
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    
    int ans = 0;
    for (int i = 0; i <= 4000; i++)
    {
        for (int j = 0; j <= 4000; j++)
        {
            int k = (n - a*i - b*j);
            if (k >= 0 && k%c == 0)
                ans = max(ans, i+j+k/c);
        }
    }
    
    cout << ans << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}