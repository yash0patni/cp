#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pli pair<ll,int>
#define pil pair<int,ll>
#define mod 1e9+9

using namespace std;

ll compute_hash(string const& s)
{
    int p = 31;
    int m = 1e9+9;
    ll res = 0;
    ll pow = 1;
    for (int i = 0; i < s.length(); i++)
    {
        res = (res + (s[i] - 'a' + 1) * pow) % m;
        pow = (pow * p) % m; 
    }
    return res;
}

void group_identical_string(vector<string>& s)
{
    int n = s.size();
    vector<pli> hash(n);
    for (int i = 0; i < n; i++)
        hash[i] = {compute_hash(s[i]), i};

    sort(hash.begin(), hash.end());

    for (int i = 0; i < n; i++)
    {
        cout << hash[i].first << " " << s[hash[i].second] << endl;
    }
}

int main()
{
    vector<string> s{"abc", "abd", "abc", "bcd", "abd", "efg", "aaa", "abc"};
    group_identical_string(s);
    cout << compute_hash("abcd") << endl;
    return 0;
}