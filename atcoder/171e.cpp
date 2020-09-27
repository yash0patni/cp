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
    ll arr[n];
    ll x = 0;
    fo (n)
    {    
        cin >> arr[i];
        x ^= arr[i];
    }
    ll temp = x;
    for (int i = 0; i < n; i++)
    {
        temp = x;
        cout << (temp ^ arr[i]) << " ";
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