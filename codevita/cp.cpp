#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

bool is_palindrome(string& s) 
{
    int n = s.length();
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}

int count_length(int n)
{
    int cnt = 0;
    if (n == 0)
        return 1;
    while (n)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

void solve()
{
    int n1, n2;
    cin >> n1 >> n2;
    string num = "";
    int cnt = 0;
    for (int i = n1; i <= n2; i++)
    {
        for (int j = 0; j <= 235959; j++)
        {
            string js = to_string(j);
            int l = js.length();
            string zero = "";
            for (int k = 0; k < 6 - l; k++)
                zero += "0";
            num = to_string(i) + zero + js;
            if (is_palindrome(num))
            {
                cnt++;
            }
        }
    }
    cout << cnt;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}