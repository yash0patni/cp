#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void permutations(vector<int> nums, int l, int r, vector<vector<int>> &ans)
{
    if (l == r)
        ans.push_back(nums);
    else
    {
        for (int i = l; i <= r; i++)
        {
            if (i <= r && nums[l] == nums[i+1])
                continue;
            swap(nums[l], nums[i]);
            permutations(nums, l+1, r, ans);
            swap(nums[l], nums[i]);
        }
    }
}

void solve()
{
    vector<vector<int>> ans;
    int n;
    cin >> n;
    vector<int> nums;
    fo (n)
        cin >> nums[i];
    permutations(nums, 0, n-1, ans);
    for (vector<int> v : ans)
    {
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}