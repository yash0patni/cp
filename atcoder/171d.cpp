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
    int x;
    ll sum = 0;
    ll arr[100005];
    fo(100005)
        arr[i] = 0;
    fo (n)
    {
        ll x;
        cin >> x;
        arr[x]++;
        sum += x;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int b, c;
        cin >> b >> c;
        ll temp = b * arr[b];
        sum -= temp;
        arr[c] += arr[b];
        sum += arr[b] * c;
        arr[b] = 0;
        cout << sum << endl;
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