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
    int n;
    cin >> n;
    int arr[n];
    fo (n)
        cin >> arr[i];
    int cnt = 0;
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        bool rec = true;
        if (arr[i] <= mx)
            rec = false;
        mx = max(mx, arr[i]);
        /*for (int j = 0; j < i; j++)
        {
            if (arr[j] >= arr[i])
            {
                rec = false;
                break;
            }
        }*/
        if (rec)
        {
            if (i == n-1)
                cnt++;
            else if (arr[i] > arr[i+1])
            {
                cnt++;
            }
        }
    }
    cout << "Case #" << (c+1) << ": " << cnt << endl;
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