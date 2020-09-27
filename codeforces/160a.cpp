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
    int sum = 0;
    fo(n)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr+n);
    int m = 0;
    for (int i = n-1; i >= 0; i--)
    {
        m += arr[i];
        sum -= arr[i];
        if (m > sum)
        {
            cout << n - i << endl;
            break;
        }
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