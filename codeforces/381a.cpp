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
    vector<int> arr(n);
    fo (n) cin >> arr[i];

    int s = 0, d = 0;
    int c = 0;
    for (int i = 0, j = n-1; i <= j; )
    {
        if (c % 2 == 0)
        {
            if (arr[i] > arr[j])
            {
                s += arr[i];
                i++;
            }
            else
            {
                s += arr[j];
                j--;
            }
            c += 1;
        }
        else
        {
            if (arr[i] > arr[j])
            {
                d += arr[i];
                i++;
            }
            else
            {
                d += arr[j];
                j--;
            }
            c += 1;
        }
    }

    cout << s << " " << d << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}