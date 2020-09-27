#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

int power(int a, int b)
{
    int result = 1;
    while (b > 0)
    {
        if (b % 2)
            result = result * a;
        a = a*a;
        b /= 2;
    }
    return result;
}

int isPalindrome(string s)
{
    int n = s.length();
    for (int i = 0, j = n-1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return 0;
    }
    return 1;
}

string subseq(string s, int bin, int n)
{
    string r = "";
    for (int i = 0; i < n; i++)
        if (bin & (1 << i))
            r += s[i];
    return r;
}

string findSubseq(string s)
{
    int n = s.length();
    int p = power(2, n);
    set<string> palstr;
    string r;
    for (int i = 1; i < p; i++)
    {
        r = subseq(s, i, n);
        //cout << r << endl;
        if (isPalindrome(r))
            palstr.insert(r);
    }
    /*
    for (string r : palstr)
        cout << r << endl;
    */
    auto ans = palstr.end();
    --ans;
    //cout << *ans << endl;
    return (*ans);
}

string method2(string s)
{
    int n = s.length();
    char z;
    int f = 0;
    for (int i = 25; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (s[j] - 'a' == i)
            {
                z = s[j];
                f = 1;
                break;
            }
        }
        if (f == 1)
            break;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == z)
            cnt++;
    string ans = "";
    while (cnt--)
        ans += z;
    return ans;
}

int main()
{
    //vector<string> vs{"a", "d", "r", "aa", "rr", "ada", "rar", "rdr", "raar", "radar"};
    //sort(vs.begin(), vs.end());
    //for (string s : vs)
    //    cout << s << endl;
    string s;
    cin >> s;
    //cout << findSubseq(s) << endl;
    //method2
    cout << method2(s) << endl;
    return 0;
}