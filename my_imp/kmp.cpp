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

vector<int> prefix_function_kmp(string s)
{
    int n = s.length();
    vector<int> prefix(n, -1);
    int j = 0, i = 1;
    while (i < n)
    {
        if (s[i] == s[j])
        {
            prefix[i] = j;
            i++;
            j++;
        }
        else if (j > 0)
        {
            j = prefix[j-1] + 1;
        }
        else
        {
            i++;
        }
    }
    return prefix;
}

vector<int> find_pattern(string txt, string pat, vector<int> prefix)
{
    int n = txt.length();
    int m = pat.length();
    int i = 0, j = 0;
    vector<int> ans;
    while (i + m - j <= n)
    {
        if (txt[i] == pat[j])
        {
            i++;
            j++;
            if (j == m)
            {
                ans.push_back(i - j);
                j = 0;
            }
        }
        else if (j > 0)
        {
            j = prefix[j-1] + 1;
        }
        else
        {
            i++;
        }
    }
    if (ans.size() == 0)
        ans.push_back(-1);
    return ans;
}

vector<int> kmp(string txt, string pat)
{
    vector<int> prefix = prefix_function_kmp(pat);
    return find_pattern(txt, pat, prefix);
}

int main()
{
    string txt, pat;
    cout << "Enter Text: ";
    cin >> txt;
    cout << "Enter Pattern: ";
    cin >> pat;
    vector<int> ans = kmp(txt, pat);
    cout << "Index(s) at which pattern found are: " << endl;
    for (int index : ans)
        cout << index << " ";
    cout << endl;
    return 0;
}