#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    int arr[n];
    fo (n)
        cin >> arr[i];
    int b[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = arr[i] + arr[j];
        }
    }

    for (int size = 0; size < n; size++)
    {
        for (int start = 0; start < n - size; start++)
        {
            for (int i = start; i < start + size; i++)
            {
                for (int j = start; j < start + size; j++)
                {
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
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