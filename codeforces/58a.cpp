#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    if (n < 5)
    {
        cout << "NO" << endl;
        return;
    }
    int h,e,l,o;
    h = e = l = o = 0;
    for (int i = 0; i < n; )
    {
        while (i < n && s[i] != 'h')
            i++;
        while (i < n && s[i] == 'h')
        {
            i++;
            h++;
        }
        while (i < n && s[i] != 'e')
            i++;
        while (i < n && s[i] == 'e')
        {
            i++;
            e++;
        }
        while (i < n && s[i] != 'l')
            i++;
        while (i < n && s[i] == 'l')
        {
            i++;
            l++;
        }
        if (l < 2)
        {
            while (i < n && s[i] != 'l')
                i++;
            while (i < n && s[i] == 'l')
            {
                i++;
                l++;
            }
        }
        while (i < n && s[i] != 'o')
            i++;
        while (i < n && s[i] == 'o')
        {
            i++;
            o++;
        }
        //deb(i);
    }
    if (h >= 1 && e >= 1 && l >= 2 && o >= 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    

}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}