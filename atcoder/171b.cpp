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
    int arr[n];
    fo(n)
        cin >> arr[i];
    sort(arr, arr+n);
    int sum = 0;
    for (int i = 0; i < k; i++)
        sum += arr[i];
    cout << sum << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}