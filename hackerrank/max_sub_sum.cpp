#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define ll long long
#define fo(n) for (ll i = 0; i < n; i++)
using namespace std;

int main()
{
    testcase()
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n];
        fo(n)
        {
            cin >> arr[i];
            arr[i] %= m;
        }
        ll pre[n];
        pre[0] = arr[0];
        for (ll i = 1; i < n; i++)
        {
            pre[i] = (pre[i-1] + arr[i]) % m;
        }/*
        fo(n)
        {
            cout << arr[i] << " ";
        }
        cout << endl;*/
        /*for (int i = 0; i < n; i++)
        {
            cout << pre[i] << " ";
        }
        cout << endl << endl;*/
        ll sum = 0;
        ll max_sum = 0;
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            sum = pre[i];
            auto ub = s.upper_bound(sum);
            if (ub != s.end())
            {
                sum = (sum-*ub+m)%m;
            }
            max_sum = max(max_sum, sum);
            s.insert(sum);
        }
        cout << max_sum << endl;
    }
    return 0;
}