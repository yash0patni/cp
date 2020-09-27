#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

bool issorted(ll *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i+1] < arr[i])
            return true;
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    ll arr[n];
    fo(n)
        cin >> arr[i];
    
    
    /*fo(n)
        cout << arr[i] << " ";
    cout << endl;
    */
    do
    {
        sort(arr, arr+n);
        for (int i = 0; i < n-1; i++)
        {
            ll x = arr[i];
            ll y = arr[i+1];
            ll r1 = x&y;
            ll r2 = x|y;
            //deb(r1);
            //deb(r2);
            if (r1*r1 + r2*r2 <= x*x + y*y)
                continue;
            arr[i] = r1;
            arr[i+1] = r2;
        }    
    } while (issorted(arr, n));
    
    ll sos = 0;
    for (int i = 0; i < n; i++)
    {
        //deb(arr[i]);
        sos += arr[i] * arr[i];
    }
    cout << sos << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}