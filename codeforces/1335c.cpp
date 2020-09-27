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
    int freq[n+1];
    fo(n+1)
        freq[i] = 0;
    fo (n)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int maxi = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (freq[i] > freq[maxi])
            maxi = i;
    }
    
    int nmax = freq[maxi];
    //int same = min(nmax, n/2);
    //freq[max] -= same;
    int dis = 0;
    for (int i = 0; i <= n; i++)
    {
        if (freq[i] > 0)
            dis++;
    } 
    int ans = max(min(dis, nmax - 1), min(dis-1, nmax));
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