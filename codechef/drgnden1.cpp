#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007
#define MAX 100

using namespace std;

void ebuildSparseTable(vector<vector<int>>& elookup, ll *arr, int n) 
{ 
    for (int i = 0; i < n; i++)
    {
        elookup[i][i] = i;
    }
    for (int k = 1; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (j - i == k)
                {
                    if (arr[elookup[i][j-1]] >= arr[elookup[i+1][j]])
                        elookup[i][j] = elookup[i][j-1];
                    else
                        elookup[i][j] = elookup[i+1][j];
                    break;
                }
            }
        }
    }
}

void ibuildSparseTable(vector<vector<int>>& ilookup, ll *arr, int n) 
{ 
    for (int i = 0; i < n; i++)
    {
        ilookup[i][i] = i;
    }
    for (int k = 1; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (j - i == k)
                {
                    if (arr[ilookup[i][j-1]] > arr[ilookup[i+1][j]])
                        ilookup[i][j] = ilookup[i][j-1];
                    else
                        ilookup[i][j] = ilookup[i+1][j];
                    break;
                }
            }
        }
    }
}

void solve()
{
    int n, q;
    cin >> n >> q;
    ll h[n];
    fo (n)
        cin >> h[i];
    ll a[n];
    fo (n)
        cin >> a[i];
    
    vector<vector<int>> elookup(n, vector<int>(n, 0));
    vector<vector<int>> ilookup(n, vector<int>(n, 0));
    ebuildSparseTable(elookup, h, n);
    ibuildSparseTable(ilookup, h, n);

    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int b;
            ll k;
            cin >> b >> k;
            a[b-1] = k;
        }
        else
        {
            int b, c;
            cin >> b >> c;
            --b;
            --c;
            ll ans = -1;

            // write logic
            bool flag = true;
            if (b < c)
            {
                for (int i = b + 1; i <= c; i++)
                {
                    if (h[i] >= h[b])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    ans = 0;
                    //check for possible ans
                    //cout << "find if" << endl;
                    //cout << "b = " << b << " c = " << c << endl; 
                    for (int i = b; i < c; )
                    {
                        ll mx = LONG_MIN;
                        int ni = -1;
                        /*for (int j = i + 1; j <= c; j++)
                        {
                            if (h[j] < h[i] && (h[j] > h[c] || j == c))
                            {
                                if (h[j] >= mx)
                                {
                                    mx = h[j];
                                    ni = j;
                                }
                            }
                        }*/
                        ni = ilookup[i+1][c];
                        ans += a[i];
                        if (i == c)
                            break;
                        i = ni;
                    }
                    ans += a[c];
                    //cout << "done else" << endl;
                }
            }
            else
            {
                for (int i = b - 1; i >= c; i--)
                {
                    if (h[i] >= h[b])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    ans = 0;
                    //check for possible ans
                    //cout << "find else" << endl;
                    //cout << "b = " << b << " c = " << c << endl; 
                    for (int i = b; i > c; )
                    {
                        ll mx = LONG_MIN;
                        int ni = -1;
                        /*for (int j = i - 1; j >= c; j--)
                        {
                            if (h[j] < h[i] && (h[j] > h[c] || j == c))
                            {
                                if (h[j] >= mx)
                                {
                                    mx = h[j];
                                    ni = j;
                                }
                            }
                        }*/
                        ni = elookup[c][i-1];
                        ans += a[i];
                        if (i == c)
                            break;
                        i = ni;
                    }
                    ans += a[c];
                    //cout << "done else" << endl;
                }
            }
            cout << ans << endl;
        }
    }
}

int main()
{
    /*ll h[] = {3,4,4,1,5};
    int n = 5;*/
    solve();
    return 0;
}