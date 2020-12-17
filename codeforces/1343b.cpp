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
    if ((n/2)%2 == 0)
    {
        cout << "YES" << endl;
        ll sum = 0;
        n = n/2;
        for (int i = 0; i < n; i++)
        {
            sum += 2 * (i+1);
            cout << 2 * (i+1) << " ";
        }
        for (int i = 0; i < n; i++)
        {
            if (i == n-1)
                cout << sum << endl;
            else
            {
                cout << 1 + 2*i << " ";
                sum -= 1 + 2*i;
            }
        }
    }
    else
    {
        cout << "NO" << endl;
    }
    
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}