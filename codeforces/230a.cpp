#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
    return a.first < b.first;
}

void solve()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int,int>> d;
    fo(n)
    {
        int x,y;
        cin >> x >> y;
        d.push_back(make_pair(x,y));
    }
    sort(d.begin(), d.end(), compare);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (s <= d[i].first)
        {
            flag = false;
            break;
        }
        s += d[i].second;
    }
    if (flag)
        cout << "YES" << endl;
    else
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