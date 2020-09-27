#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define ll long long

using namespace std;

ll count_zero(ll x)
{
    ll cnt = 0;
    while (x > 0)
    {
        if (x & 1)
            break;
        cnt++;
        x >>= 1;
    }
    return cnt;
}

ll power(ll a, ll b)
{
    ll result = 1;
    while (b > 0)
    {
        if (b % 2 == 1)
            result = (result * a);
        a = (a * a);
        b /= 2;
    }
    return result;
}

int main()
{
    //cout << endl;
    testcase()
    {
        ll ts;
        cin >> ts;
        if (ts & 1)
        {
            cout << ts / 2 << endl;
        }
        else if (ts % 2 == 0 && ts % 3 == 0 && ts % 4 != 0)
        {
            cout << ts / 4 << endl;
        }
        else
        {
            ll cnt = 0;
            bool flag = true;
            ll i , j;
            ll ts_cnt = count_zero(ts);
            ll p = power(2, ts_cnt+1);
            cout << ts / p << endl;
            /*ll js_cnt = 0;
            for (ll js = 4; js < ts; js += 4)
            {
                //i = js;
                js_cnt = count_zero(js);
                if (js_cnt > ts_cnt)
                {
                    cnt++;
                }
                //cout << "i = " << js << endl;
                /*flag = true;
                
                if (flag)
                {
                    cout << "i = " << js << endl;
                    cnt++;
                }
                
            }
            cout << cnt << endl;
            */
        }
    }
    return 0;
}