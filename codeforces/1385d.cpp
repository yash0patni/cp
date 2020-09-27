#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int check_all_c(string& s, int st, int n, char c)
{
    int cnt = 0;
    for (int i = st; i < n; i++)
    {
        if (s[i] != c)
            cnt++;
    }
    return cnt;
}

int check_a_good(string& s, int st, int n, char c)
{
    if (n - st == 1)
    {
        return s[st] != c;
    }
    int m = st + (n - st) / 2;
    int cnt1 = check_all_c(s, st, m, c) + check_a_good(s, m, n, c+1);
    int cnt2 = check_all_c(s, m, n, c) + check_a_good(s, st, m, c+1);
    return min(cnt1, cnt2);
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << check_a_good(s, 0, n, 'a') << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}