#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int e = 0;
    int o = 0;
    fo (n)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            e++;
        else
            o++;
    }
    int flage = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i] % 2 != 0)
        {
            flage = 1;
            break;
        }
    }
    int flago = 0;
    for (int i = 1; i < n; i += 2)
    {
        if (arr[i] % 2 == 0)
        {
            flago = 1;
            break;
        }
    }
    if (flage == 0 && flago == 0)
    {
        cout << 0 << endl;
        return;
    }
    int io = n/2;
    int ie = n - io;
    if (o != io || e != ie)
    {
        cout << -1 << endl;
        return;
    }
    int ne = 0;
    int no = 0;
    for (int i = 0; i < n; i+=2)
    {
        if (arr[i] % 2 == 1)
            ne++;
    }
    for (int i = 1; i < n; i+=2)
    {
        if (arr[i] % 2 == 0)
            no++;
    }
    cout << ne << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}