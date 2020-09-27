#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

void solve()
{
    vector<pair<int,int>> v;
    v.push_back(make_pair(100,2));
    v.push_back(make_pair(99,3));
    v.push_back(make_pair(99,4));
    sort(v.begin(), v.end());
    for (pair<int,int> p : v)
        cout << p.first << " " << p.second << endl; 
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}