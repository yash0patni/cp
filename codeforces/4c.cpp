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
    int t;
    cin >> t;
    map<string, int> m;
    while (t--)
    {
        string s;
        cin >> s;
        if (m.find(s) != m.end())
        {
            m[s]++;
            cout << s << m[s] << endl; 
        }
        else
        {
            m[s] = 0;
            cout << "OK" << endl;
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