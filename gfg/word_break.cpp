#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

bool check(string s)
{
    for (int i = 0; i < s.length(); i++)
        if (s[i] != ' ')
            return false;
    return true;
}

bool wordbreak(string s, vector<string> &dict)
{
    //deb(s);
    //deb(s.length());
    if (check(s))
    {
        return true;
    }
    else
    {
        for (int i = 0; i < dict.size(); i++)
        {
            deb(dict[i]);
            deb(s);
            int index = s.find(dict[i]);
            string temp = s;
            int len = dict[i].length();
            string rep = "";
            if (index > -1)
            {
                for (int j = index; j < index + len; j++)
                    rep += " ";
                deb(rep.length());
            }
            if (index > -1 && wordbreak(s.replace(index, len, rep), dict))
            {
                return true;
            }
            s = temp;
        }
        return false;
    }
}

void solve()
{
    string s = "ccacccbcab";
    vector<string> dict{"cc","bb","aa","bc","ac","ca","ba","cb"};

    cout << wordbreak(s,dict) << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}