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
    int n;
    cin >> n;
    ll arr[n], brr[n];
    map<ll,ll> mab;
    ll mna = LONG_MAX;
    ll mnb = LONG_MAX;
    fo (n)
    {
        cin >> arr[i];
        mab[arr[i]]++;
        mna = min(mna, arr[i]);
    }
    fo (n)
    {
        cin >> brr[i];
        mab[brr[i]]++;
        mnb = min(mnb, brr[i]);
    }
    sort(arr, arr+n);
    sort(brr, brr+n);
    bool flag = true;
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != brr[i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << ans << endl;
        return;
    }
    for (auto it = mab.begin(); it != mab.end(); it++)
    {
        if ((it->second) & 1)
        {
            cout << "-1" << endl;
            return;
        }
    }
    
    vector<ll> ra;
    vector<ll> rb;
    for (int i = 0, j = 0; i < n || j < n; )
    {
        if (i < n && j < n && arr[i] == brr[j])
        {
            i++;
            j++;
        }
        else
        {
            ll a = arr[i];
            ll b = brr[j];
            while (i < n && (j == n || a < b))
            {
                int k = i;
                ll acnt = 0;
                while (k < n && arr[k] == a)
                {
                    acnt++;
                    if (acnt % 2 == 0)
                        ra.push_back(a);
                    k++;
                }
                i = k;
                if (i == n)
                    break;
                a = arr[i];
            }
            while (j < n && (i == n || b < a))
            {
                int l = j;
                ll bcnt = 0;
                while (l < n && brr[l] == b)
                {
                    bcnt++;
                    if (bcnt % 2 == 0)
                        rb.push_back(b);
                    l++;
                }
                j = l;
                if (j == n)
                    break;
                b = brr[j];
            }
        }
    }

    reverse(rb.begin(), rb.end());

    /*if (ra.size() != rb.size())
    {
        cout << "-1" << endl;
        return;
    }*/
    //deb(ra.size());
    //deb(rb.size());
    ll mn = min(mna, mnb);
    for (int i = 0; i < ra.size(); i++)
    {
        //mn = min(mn, min(ra[i], rb[i]));
        ans += min(2*mn, min(ra[i], rb[i]));
    }

    cout << ans << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}