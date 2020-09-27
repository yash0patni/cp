#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int nn = 200001;
    int freq[nn];
    fo(nn)
        freq[i] = 0;
    fo (n)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    sort(arr, arr+n);
    if (freq[arr[n-1]] > 1)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < nn; i++)
    {
        if (freq[i] > 2)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < nn; i++)
    {
        if (freq[i] > 0)
        {
            cout << i << " ";
            freq[i]--;
        }
    }
    for (int i = nn-1; i >= 0; i--)
    {
        if (freq[i] > 0)
        {
            cout << i << " ";
            freq[i]--;
        }
    }
    cout << endl;
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}