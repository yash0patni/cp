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

void solve()
{
    int n1, n2;
    cin >> n1 >> n2;
    string num = "";
    int cnt = 0;
    string hs = "", ms = "", ss = "", is = "";
    for (int i = n1; i <= n2; i++)
    {
        for (int h = 0; h < 24; h++)
        {
            for (int m = 0; m < 100; m++)
            {
                for (int s = 0; s < 60; s++)
                {
                    is = to_string(i);
                    //hour
                    if (h < 10)
                    {
                        hs = "0" + to_string(h);
                    }
                    else
                    {
                        hs = to_string(h);
                    }
                    //minute
                    if (m < 10)
                    {
                        ms = "0" + to_string(m);
                    }
                    else
                    {
                        ms = to_string(m);
                    }
                    //second
                    if (s < 10)
                    {
                        ss = "0" + to_string(s);
                    }
                    else
                    {
                        ss = to_string(s);
                    }
                    num = is+hs+ms+ss;
                    if (is_palindrome(num))
                    {
                        cnt++;
                        cout << num << " ";
                    }
                }
            }
        }
    }
    cout << endl;
    cout << cnt << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}