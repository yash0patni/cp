#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

int rec(vector<int>& arr, int i, int j, int k, int z, int sum, bool c, vector<vector<int>>& dpt, vector<vector<int>>& dpf)
{
    if (j == k)
        return sum + arr[i];
    int p1;
    //if (c && dpt[i][j] != -1)
        //p1 = dpt[i][j];
    //else
        p1 = dpt[i][j] = rec(arr, i+1, j+1, k, z, sum+arr[i], true, dpt, dpf);
    /*
    else
    {
        if (dpf[i][j] != -1)
            p1 = dpf[i][j];
        else
            p1 = dpf[i][j] = rec(arr, i+1, j+1, k, z, sum+arr[i], true, dpt, dpf);
    }*/
    if (i == 0)
    {
        return p1;
        //return rec(arr, i+1, j+1, k, z, sum+arr[i], true);
    }
    else
    {
        if (z == 0)
        {
            return p1;
            //return rec(arr, i+1, j+1, k, z, sum+arr[i], true);
        }
        else
        {
            if (c)
            {
                return dpt[i][j] =  max(p1, rec(arr, i-1, j+1, k, z-1, sum+arr[i], false, dpt, dpf));
                //return max(rec(arr, i+1, j+1, k, z, sum+arr[i], true), rec(arr, i-1, j+1, k, z-1, sum+arr[i],false));
            }
            else
            {
                return p1;
                //return rec(arr, i+1, j+1, k, z, sum+arr[i], true);
            }
        }
    }
}

void solve()
{
    int n, k, z;
    cin >> n >> k >> z;
    vector<int> arr(n);
    fo (n) cin >> arr[i];

    int ans = 0;

    int i = 0;
    bool c = true;
    /*for (int j = 0; j < k; j++)
    {
        if (i == 0)
        {
            c = true;
            i++;
        }
        else
        {
            if (z == 0)
            {
                c = true;
                i++;
            }
            else
            {
                if (arr[i+1] > arr[i-1])
                {
                    c = true;
                    i++;
                }
                else
                {
                    if (!c)
                    {
                        i++;
                        c = true;
                    }
                    else
                    {
                        c = false;
                        i--;
                        z--;
                    }
                }
            }
        }
        //deb(i);
        //deb(arr[i]);
        ans += arr[i];
    }*/

    vector<vector<int>> dpt(n+1, vector<int>(k+1, -1));
    vector<vector<int>> dpf(n+1, vector<int>(k+1, -1));

    ans = rec(arr, i, 0, k, z, ans, true, dpt, dpf);

    cout << ans << endl;

    /*for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[i].size(); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }*/
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}