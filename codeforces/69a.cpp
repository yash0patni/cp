#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a,b,c;
    a = b = c = 0;
    int x,y,z;
    while (n--)
    {
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }
    if (a == 0 && b == 0 && c == 0)
        cout << "YES" << endl;
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