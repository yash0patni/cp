#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
#define fos(s, n) for (ll j = s; j < n; j++)

using namespace std;

int main()
{
    testcase()
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        fo(n)
            cin >> arr[i];
        unordered_map<ll,ll> freq;
        ll i;
        ll dis_cnt = 0;
        for(i = 0; i < k; i++)
        {
            if (freq[arr[i]] == 0)
                dis_cnt++;
            freq[arr[i]]++;
        }
        for ( ; i < n; i++)
        {
            cout << dis_cnt << " ";
            if (freq[arr[i-k]] == 1)
                dis_cnt--;
            freq[arr[i-k]]--;
            if (freq[arr[i]] == 0)
                dis_cnt++;
            freq[arr[i]]++;
        }
        cout << dis_cnt;
    }
    return 0;
}