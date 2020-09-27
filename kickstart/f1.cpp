#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

void solve(int c)
{
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    //queue<pair<int,int>> q;
    fo(n)
    {
        cin >> arr[i];
        //q.push({arr[i], i});
    }
    vector<int> ans;

    map<int,vector<int>> m;

    for (int i = 0; i < n; i++)
    {
        int t;
        if (arr[i] % x == 0)
            t = arr[i] / x;
        else
            t = (arr[i] / x) + 1;
        m[t].push_back(i+1);
    }

    /*while (!q.empty())
    {
        pair<int,int> temp = q.front();
        q.pop();
        if (temp.first <= x)
            ans.push_back(temp.second+1);
        else
        {
            temp.first -= x;
            q.push(temp);
        }
    }*/
    
    cout << "Case #" << c << ": ";
    for (auto it = m.begin(); it != m.end(); ++it)
    {
        vector<int> temp = it->second;
        for (int num : temp)
            cout << num << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}