#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int countbit(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        if (n&1)
            break;
        n >>= 1;
    }
    return cnt;
}

int countlbit(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n >>= 1;
    }
    return cnt;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int brr[m];
    fo(n)
        cin >> arr[i];
    fo(m)
        cin >> brr[i];
    int fc = 0;
    //cout << "ANS" << endl;
    int l = 33, f = 0;
    for (int i = 0; i < n; i++)
    {
        int c;
        //int ocf = 0,ocl = 33;
        int mc = INT_MAX;
        for (int j = 0; j < m; j++)
        {
            c = arr[i]&brr[j];
            
            int cl = countlbit(c);
            int cf = countbit(c);
            cout << cl << " " << cf << " " << l << " " << f << " " << endl;
            if (cl <= l && cf >= f)
            {
                mc = min(c,mc);
            }
            else
            {
                mc = c;
            }
            
        }
        fc = fc | mc;
        l = countlbit(fc);
        f = countbit(fc);
        //cout << " => " << countlbit(fc) << endl;
    }
    //cout << "ANS" << endl;
    cout << fc << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}