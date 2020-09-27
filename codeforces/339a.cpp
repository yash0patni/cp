#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> v;
    for (int i = 0; i < s.length(); i+=2)
    {
        v.push_back((int)s[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << (char)v[i];
        if (i != v.size() - 1)
            cout << "+";
    }
    cout << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}