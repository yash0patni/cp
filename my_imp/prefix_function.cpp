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

vector<int> prefix_function(string s)
{
    int n = s.length();
    vector<int> prefix(n);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            if (s.substr(0, k) == s.substr(i - k + 1, k))
                prefix[i] = k;
        }
    }
    return prefix;
}

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
    for (int i = 0; i < n; i++)
    {
        prefix[i] += 1;
    }
    return prefix;
}

void print(string s, vector<int>& prefix)
{
    for (int i = 0; i < s.length(); i++)
        cout << i << "\t";
    cout << endl;
    for (char c : s)
        cout << c << "\t";
    cout << endl;
    for (int p : prefix)
        cout << p << "\t";
    cout << endl;
}

int main()
{
    string s;
    cout << "Enter String: ";
    cin >> s;
    cout << "Trivial Algorithm:" << endl;
    vector<int> prefix = prefix_function(s);
    print(s, prefix);
    cout << "KMP Algorithm:" << endl;
    prefix = prefix_function_kmp(s);
    print(s, prefix);
    return 0;
}