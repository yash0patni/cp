#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void solve(int c)
{
    ll n;
    cin >> n;
    ll arr[n];
    fo (n)
        cin >> arr[i];
    ll cnt = 1;
    ll rb = 0;
    ll i = 1;
    while (i < n)
    {
        cnt = 1;
        while (i < n && arr[i] >= arr[i-1])
        {
            if (arr[i] == arr[i-1])
            {
                i++;
            }
            else
            {
                if (cnt == 4)
                {
                    cnt = 0;
                    rb++;
                }
                cnt++;
                i++;    
            }
        }
        cnt = 1;
        while (i < n && arr[i] <= arr[i-1])
        {
            if (arr[i] == arr[i-1])
            {
                i++;
            }
            else
            {
                if (cnt == 4)
                {
                    cnt = 0;
                    rb++;
                }
                cnt++;
                i++;
            }
        }
        while (i < n && arr[i] == arr[i-1])
        {
            i++;
        }
    }

    cout << "Case #" << (c+1) << ": " << rb << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int q = 0; q < t; q++)
    {
        solve(q);
    }
    return 0;
}