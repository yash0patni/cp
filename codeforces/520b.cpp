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
    int n, m;
    cin >> n >> m;
    if (n == m)
        cout << 0 << endl;
    else if (n > m)
        cout << n-m << endl;
    else
    {
        int cnt = 0;
        while(n != m)
        {
            if (m&1 || m < n)
                m++;
            else
                m /= 2;
            cnt++;        
        }
        cout << cnt << endl;
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