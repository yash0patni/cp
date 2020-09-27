#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[n], letter[m];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    for (ll i = 0; i < m; i++)
        cin >> letter[i];
    vector<ll> prearr(n);
    prearr[0] = arr[0];
    for (ll i = 1; i < n; i++)
        prearr[i] = prearr[i-1] + arr[i];
    /*for (ll i = 0; i < n; i++)
        cout << prearr[i] << " ";*/
    //cout << endl;
    ll t;
    for (ll i = 0; i < m; i++)
    {
        t = letter[i];
        auto ub = lower_bound(prearr.begin(), prearr.end(), t);
        //cout << *ub << " ";
        int index = ub - prearr.begin();
        //cout << index << endl;
        if (ub == prearr.begin())
        {
            cout << index+1 << " " << t << endl;
        }
        else
        {
            t = t - prearr[index - 1];
            cout << index+1 << " " << t << endl;
        }
    }
    return 0;
}