#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 0;
    int ans = 0;
    while (i < n)
    {
        int j = i+1;

        while (j < n && s[j] == '0')
            j++;
        
        int left = s[i] == '1' ? k : 0;
        int right = (j < n && s[j] == '1')? k : 0;
        int len = j - i;
        
        if (left == k)
            len--;
        
        len -= left + right;
        //deb(len);
        if (len > 0)
            ans += (len+k) / (k+1);
        i = j;
    }
    cout << ans << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}