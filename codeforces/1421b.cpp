#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define pb push_back
#define mod 1000000007

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int a = arr[0][1] == '0' ? 0 : 1;
    int b = arr[1][0] == '0' ? 0 : 1;
    int c = arr[n-1][n-2] == '0' ? 0 : 1;
    int d = arr[n-2][n-1] == '0' ? 0 : 1;

    if (a == b && c == d && a != c)
    {
        cout << 0 << endl;
    }
    else if (a == b && c == d && a == c)
    {
        cout << 2 << endl;
        cout << "1 2" << endl;
        cout << "2 1" << endl;
    }
    else if (a == b && c != d)
    {
        cout << 1 << endl;
        if (c == a)
        {
            cout << n << " " << n-1 << endl;
        }
        else
        {
            cout << n-1 << " " << n << endl;
        }
    }
    else if (c == d && a != b)
    {
        cout << 1 << endl;
        if (c == a)
        {
            cout << "1 2" << endl;
        }
        else
        {
            cout << "2 1" << endl;
        }
    }
    else
    {
        cout << 2 << endl;
        if (a == d)
        {
            cout << "1 2" << endl;
            cout << n << " " << n-1 << endl;
        }
        else if (a == c)
        {
            cout << "1 2" << endl;
            cout << n-1 << " " << n << endl;
        }
        else if (b == d)
        {
            cout << "2 1" << endl;
            cout << n << " " << n-1 << endl;
        }
        else
        {
            cout << "2 1" << endl;
            cout << n-1 << " " << n << endl;
        }
    }
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}