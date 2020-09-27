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

int strStr(string haystack, string needle) 
{
    if (!needle.length())
        return 0;
    int m = haystack.length();
    int n = needle.length();
    if (n > m)
        return -1;
    
    // implementing Rabin Karp
    
    int d = 256;
    int p = 0;
    int t = 0;
    int h = 1;
    int q = 101;
    for (int i = 0; i < n-1; i++)
    {
        h = (h * d) % q;
    }
    
    for (int i = 0; i < n; i++)
    {
        p = (d * p + needle[i]) % q;
        t = (d * t + haystack[i]) % q;
    }
    
    for (int i = 0; i <= m - n; i++)
    {
        if (p == t)
        {
            int j;
            for (j = 0; j < n; j++)
            {
                if (haystack[i+j] != needle[j])
                    break;
            }
            if (j == n)
            {
                return i;
            }
        }
        if (i < m-n)
        {
            t = (d * (t - haystack[i] * h) + haystack[i+n]) % q;
            if (t < 0)
                t += q;
        }
    }
    return -1;
}

int main()
{
    string text = "facebook amazon netflix google";
    string pat = "book";
    cout << strStr(text, pat) << endl;
    return 0;
}