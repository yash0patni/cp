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
    int n, a, b;
    cin >> n >> a >> b;
    ll arr[n+1];
    arr[0] = -1;
    arr[1] = -1;
    for (int i = 2; i <= n; i++)
        cin >> arr[i];
    
    map<int,int> val;

    for (int i = n; i >= 1; i--)
    {
        map<int,int> m;
        int cnt = 0;
        int k = i;
        while (k > 0)
        {
            while (k > 0 && cnt != a)
            {
                k = arr[k];
                cnt++;
                if (k <= 1)
                    break;
            }
            if (cnt == a)
            {
                m[k]++;
                cnt = 0;
            }
            if (k <= 1)
            {
                break;
            }
        }
        for (int j = i; j >= 1; j--)
        {
            int cnt = 0;
            int k = j;
            while (k > 0)
            {
                while (k > 0 && cnt != b)
                {
                    k = arr[k];
                    cnt++;
                    if (k <= 1)
                        break;
                }
                if (cnt == b)
                {
                    m[k]++;
                    cnt = 0;
                }
                if (k <= 1)
                {
                    break;
                }
            }
        }
        val[m.size()]++;
    }

    double total = 0.0;

    for (auto it = val.begin(); it != val.end(); ++it)
    {
        if (it->first > 0)
            total += it->second;
        //cout << it->first << " " << it->second << endl;
    }

    double ans = 0.0;

    for (auto it = val.begin(); it != val.end(); ++it)
    {

        double d = it->second / total;
        ans += it->first * 1.0 * d;
    }

    cout << "Case #" << (c+1) << ": " << ans << endl;
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