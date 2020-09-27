#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

int countbits(ll x)
{
    int res = 0;
    while (x)
    {
        res++;
        x >>= 1;
    }
    return res;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    ll arr[n];
    ll m = LONG_MIN;
    fo (n)
    {
        cin >> arr[i];
        m = max(m, arr[i]);
    }
    int bit = countbits(m);
    string s;
    int zero = bit-k;
    while (zero--)
        s.push_back('0');
    while (k--)
        s.push_back('1');
    ll mx = LONG_MIN;
    ll sum = 0;
    ll ans = 0;
    do 
    {
        ll x = stoi(s, 0, 2);
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (x & arr[i]);
        }
        if (sum > mx)
        {
            mx = sum;
            ans = x;
        }
    } while (next_permutation(s.begin(), s.end()));
    cout << ans << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}