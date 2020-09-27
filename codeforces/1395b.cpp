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
    int n,m,x,y;
    cin >> n >> m >> x >> y;
    if (y == m)
    {
        for (int i = y; i >= 1; i--)
        {
            cout << x << " " << i << endl;
        }
    }
    else
    {
        cout << x << " " << y << endl;
        for (int i = 1; i < y; i++)
        {
            cout << x << " " << i << endl;
        }
        for (int i = y+1; i <= m; i++)
        {
            cout << x << " " << i << endl;
        }
    }
    int l;
    if (y == m)
    {
        l = 1;
    }
    else
    {
        l = 0;
    }
        //1 to x-1
        for (int i = 1; i < x; i++)
        {
            if (l)
            {
                for (int j = 1; j <= m; j++)
                {
                    cout << i << " " << j << endl;
                }
                l = 0;
            }
            else
            {
                for (int j = m; j >= 1; j--)
                {
                    cout << i << " " << j << endl;
                }
                l = 1;
            }
        }
        //x+1 to n
        for (int i = x+1; i <= n; i++)
        {
            if (l)
            {
                for (int j = 1; j <= m; j++)
                {
                    cout << i << " " << j << endl;
                }
                l = 0;
            }
            else
            {
                for (int j = m; j >= 1; j--)
                {
                    cout << i << " " << j << endl;
                }
                l = 1;
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