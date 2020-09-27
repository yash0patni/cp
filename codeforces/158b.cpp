#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int freq[5] = {0,0,0,0,0};
    fo(n)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int ans = freq[4];
    /*fo (5)
        cout << freq[i];*/
    if (freq[1] > freq[3])
    {
        freq[1] -= freq[3];
        ans += freq[3];
    }
    else
    {
        freq[1] = 0;
        ans += freq[3];
    }
    ans += freq[2] / 2;
    freq[2] = freq[2] % 2;
    if (freq[1] == 0)
        ans += freq[2];
    if (freq[2] == 1 && freq[1] >= 2)
    {
        freq[1] -= 2;
        freq[2] = 0;
        ans += 1;
    }
    int rem = freq[1] % 4 == 0 ? 0 : 1;
    ans += freq[1] / 4;
    ans += rem;
    cout << ans << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}