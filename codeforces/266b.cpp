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
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] == 'B' && s[i+1] == 'G')
            {
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout << s << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}