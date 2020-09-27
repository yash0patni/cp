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
    string s;
    cin >> s;
    string pat1 = "AB";
    string pat2 = "BA";
    vector<int> p1,p2;
    int n = s.length();
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == 'A' && s[i+1] == 'B')
            p1.push_back(i);
        if (s[i] == 'B' && s[i+1] == 'A')
            p2.push_back(i);        
    }
    for (int i = 0; i < p1.size(); i++)
    {
        for (int j = 0; j < p2.size(); j++)
        {
            if (abs(p1[i] - p2[j]) >= 2)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}