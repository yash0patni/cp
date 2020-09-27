#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    fo(n)
        cin >> arr[i];
    int pre[n];
    pre[0] = arr[0];
    int num = 0;
    int ind = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i-1];
    }
    int maxl = -1;
    for (int i = 0; i < n; i++)
    {
        if (pre[i] % x != 0)
        {
            if (i < ind)
            {
                ind = i;
                num = pre[i];
                maxl = 1;
            }
            else
            {
                maxl = i + 1;
            }
        }
        else
        {
            if (num != 0 && (pre[i] - num) % x != 0)
            {
                maxl = max((i - ind), maxl);
            }
        }
    }
    if (maxl == 1)
        maxl = n;
    cout << maxl << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}