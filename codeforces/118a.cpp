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
    string ans = "";
    for (char c : s)
    {
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' ||c == 'i' || c == 'I' ||c == 'o' || c == 'O' ||c == 'u' || c == 'U' || c == 'y' || c == 'Y')
        {
            ;
        }
        else
        {
            ans += '.';
            if (c >= 'A' && c <= 'Z')
                c += 32;
            ans += (char) c;
        }
    }
    cout << ans << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}