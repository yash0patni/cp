#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void change_case(char *c)
{
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
    else
        *c = *c + 32;
}

void permute(string s, int l, int r)
{
    if (l > r)
        cout << s << endl;
    else
    {
        if ((s[l] >= 'a' && s[l] <= 'z') || (s[l] >= 'A' && s[l] <= 'Z'))
        {
            permute(s, l+1, r);    
            change_case(&s[l]);
            permute(s, l+1, r);
        }
        else
        {
            permute(s, l+1, r);
        }
    }
}

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    /*cout << s << endl;
    change_case(&s[0]);
    change_case(&s[n-1]);
    cout << s << endl;*/
    permute(s, 0, n-1);
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}