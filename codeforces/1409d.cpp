#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int ds(ll n)
{
    int d = 0;

    while (n)
    {
        d += n % 10;
        n /= 10;
    }

    return d;
}

void solve()
{
    ll n, s;
    cin >> n >> s;
    int d = ds(n);
    vector<int> dig;

    ll nc = n;

    while (n)
    {
        dig.push_back(n%10);
        n /= 10;
    }
    
    if (d <= s)
        cout << "0" << endl;
    else
    {
        d = d - s;
        vector<int> ans;
        int c = 0;
        for (int i = 0; i < dig.size(); i++)
        {
            d -= dig[i];
            int p;
            if (dig[i]+c == 0)
            {
                p = 0;
                c = 0;
            }
            else
            {
                p = 10 - dig[i] - c;
                c = 1;
            }
            ans.push_back(p);
            if (d < 0)
                break;
        }

        reverse(ans.begin(), ans.end());
        int s = 0;
        while (ans[s] == 0)
            s++;
        for (int i = s; i < ans.size(); i++)
            cout << ans[i];
        cout << endl;
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