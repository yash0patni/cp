#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    ll k;
    cin >> k;
    string s = "codeforces";
    vector<int> v(10,1);
    ll p = 1;
    bool flag = true;
    while (1)
    {
        for (int i = 0; i < 10; i++)
        {
            if (p >= k)
            {
                flag = false;
                break;
            }
            p /= v[i];
            v[i]++;
            p *= v[i];
            
        }
        if (!flag)
            break;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < v[i]; j++)
        {
            cout << s[i];
        }
    }
    cout << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}