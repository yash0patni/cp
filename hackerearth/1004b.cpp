#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

int solve(vector<int>& height)
{
    int n = height.size();
    int mx = 0;
    int sum = 0;
    for (int i = 0; i < n; )
    {
        int j;
        for (j = i+1; j < n; j++)
        {
            if (height[i] <= height[j])
                break;
        }
        mx = height[i];
        if (j == n)
        {
            mx = height[i];
            int p = i;
            if (i != n-1)
            {
                int mxi = height[i+1];
                for (j = i+1; j < n; j++)
                {
                    if (mxi <= height[j])
                    {
                        mxi = height[j];
                        p = j;
                    }
                }
                mx = mxi;
            }
            j = p;
        }
        cout << i << " " << j << endl;
        deb(mx);
        for (int k = i; k < j; k++)
        {
            sum += (mx - height[k]) > 0 ? (mx - height[k]) : 0;
        }
        deb(sum);
        if (i == j)
            i++;
        else
            i = j;
    }
    return sum;
}

int main()
{
    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
    cout << solve(height) << endl;
    return 0;
}