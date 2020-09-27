#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    ll h[n];
    fo (n)
        cin >> h[i];
    ll a[n];
    fo (n)
        cin >> a[i];
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int b;
            ll k;
            cin >> b >> k;
            a[b-1] = k;
        }
        else
        {
            int b, c;
            cin >> b >> c;
            --b;
            --c;
            ll ans = -1;

            // write logic
            bool flag = true;
            if (b < c)
            {
                for (int i = b + 1; i <= c; i++)
                {
                    if (h[i] >= h[b])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    ans = 0;
                    //check for possible ans
                    //cout << "find if" << endl;
                    //cout << "b = " << b << " c = " << c << endl; 
                    for (int i = b; i < c; )
                    {
                        ll mx = LONG_MIN;
                        int ni = -1;
                        for (int j = i + 1; j <= c; j++)
                        {
                            if (h[j] < h[i] && (h[j] > h[c] || j == c))
                            {
                                if (h[j] >= mx)
                                {
                                    mx = h[j];
                                    ni = j;
                                }
                            }
                        }
                        ans += a[i];
                        if (i == c)
                            break;
                        i = ni;
                    }
                    ans += a[c];
                    //cout << "done else" << endl;
                }
            }
            else
            {
                for (int i = b - 1; i >= c; i--)
                {
                    if (h[i] >= h[b])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    ans = 0;
                    //check for possible ans
                    //cout << "find else" << endl;
                    //cout << "b = " << b << " c = " << c << endl; 
                    for (int i = b; i > c; )
                    {
                        ll mx = LONG_MIN;
                        int ni = -1;
                        for (int j = i - 1; j >= c; j--)
                        {
                            if (h[j] < h[i] && (h[j] > h[c] || j == c))
                            {
                                if (h[j] >= mx)
                                {
                                    mx = h[j];
                                    ni = j;
                                }
                            }
                        }
                        ans += a[i];
                        if (i == c)
                            break;
                        i = ni;
                    }
                    ans += a[c];
                    //cout << "done else" << endl;
                }
            }

            cout << ans << endl;

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