#define pii pair<int,int>
#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    int d = y - x;
    int diff = 0;
    for (int i = n-1; i > 0; i--)
    {
        if (d % i == 0)
        {
            diff = d / i;
            break;
        }
    }
    int cnt = 0;
    for (int i = x; i <= y; i += diff)
    {
        cout << i << " ";
        cnt++;
    }
    int num = x - diff;
    while (cnt < n && num > 0)
    {
        cout << num << " ";
        num -= diff;
        cnt++;
    }
    num = y + diff;
    while (cnt < n)
    {
        cout << num << " ";
        num += diff;
        cnt++;
    }
    cout << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}