#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
#define fos(s, n) for (ll j = s; j < n; j++)

using namespace std;

ll find(ll a, ll k)
{
    if (k == 0)
        return a;
    ll n = a;
    ll min = LONG_MAX;
    ll max = LONG_MIN;
    while (n)
    {
        ll rem = n % 10;
        if (rem < min)
            min = rem;
        if (rem > max)
            max = rem;
        n /= 10;
    }
    a = a + (min*max);
    return find(a, k-1);
}

int main()
{
    testcase()
    {
        ll a, k;
        cin >> a >> k;
        k = k - 1;
        while (k--)
        {
            ll n = a;
            ll min = LONG_MAX;
            ll max = LONG_MIN;
            while (n)
            {
                ll rem = n % 10;
                if (rem < min)
                    min = rem;
                if (rem > max)
                    max = rem;
                n /= 10;
            }
            a = a + (min*max);
        }
        cout << a << endl;
        //cout << find(a, k) << endl;
    }
    return 0;
}