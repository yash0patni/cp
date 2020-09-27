#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

ll power(int a, int b)
{
    ll result = 1;
    while (b > 0)
    {
        if (b % 2)
            result = result * a;
        a = a*a;
        b /= 2;
    }
    return result;
}

void gensub(int *arr, int n)
{
    ll pow = power(2, n);
    
    vector<int> ans;
    int max_sum = INT_MIN;
    for (ll i = 1; i < pow; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            if (i & 1 << j)
                v.push_back(arr[j]);
        }
        if (v.size() > 1)
        {
            //reverse(v.begin(), v.end());
            int s = v.size();
            int sum = 0;
            for (int k = 0; k < s-1; k++)
            {
                sum += abs(v[k] - v[k+1]);
            }
            if (sum > max_sum)
            {
                ans = v;
                max_sum = sum;
            }
        }
    }
    cout << ans.size() << endl;
    for (int x : ans)
        cout << x << " ";
    cout << endl;
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    fo(n)
        cin >> arr[i];
    gensub(arr, n);
}

int main()
{
    testcase()
    {
        solve();
    }
    return 0;
}