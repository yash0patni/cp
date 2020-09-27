#include <bits/stdc++.h>
#define ll long long
#define testcase() ll t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
using namespace std;

int main()
{
    testcase()
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        fo(n)
            cin >> a[i];
        fo(n)
            cin >> b[i];
        ll posa[n], posb[n];
        posa[0] = a[0];
        posb[0] = b[0];
        for (ll i = 1; i < n; i++)
            posa[i] = posa[i-1] + a[i];
        for (ll i = 1; i < n; i++)
            posb[i] = posb[i-1] + b[i];
        ll wd = 0;
        for (ll i = 0; i < n; i++)
        {   
            if (posa[i] == posb[i] && a[i] == b[i])
            {
                wd += a[i];
            }
        }
        cout << wd << endl;
    }
    return 0;
}