#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    int m, s;
    cin >> m >> s;
    if (s > m*9 || s < 1 && m > 1)
    {
        cout << "-1 -1\n";
        return;
    }
    int i,k;
    for(i=m-1,k=s;i>=0;i--)
    {
        int j=max(0,k-9*i); 
        if(j==0&&i==m-1&&k)
            j=1;
        cout<<j;
        k-=j;
    }
    cout<<" ";
    for(i=m-1,k=s;i>=0;i--)
    {
        int j=min(9,k);
        cout<<j;
        k-=j;
    }
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}