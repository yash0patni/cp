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
    int n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (st.empty())
                ans++;
            else
                st.pop();            
        }
    }
    int an = 0;
    while (!st.empty())
    {
        an++;
        st.pop();
    }
    cout << max(ans,an) << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}