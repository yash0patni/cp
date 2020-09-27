#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

const int N = 1000001;

void solve()
{
    int n;
    cin >> n;
    vector<ll> cnt(N, 0);
    int a;
    fo(n)
    {
        cin >> a;
        cnt[a]++;
    }
    for (int i = 2; i < N; i++)
    {
        cnt[i] = max(cnt[i-1], cnt[i-2] + cnt[i] * i);
    }
    cout << cnt[N-1];
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}