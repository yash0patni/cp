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
    int arr[2*n];
    int orig[2*n];
    fo(2*n)
    {
        cin >> arr[i];
        orig[i] = arr[i];
    }
    int m = 1;
    int p = n-1;
    int pairs = 0;
    int ans = 0;
    //deb(p);
    while (1)
    {
        fo(2*n)
        {
           arr[i] = orig[i];
        }
        pairs = 0;
        m++;
        //deb(m);
        for (int i = 0; i < 2*n; i++)
        {
            if (arr[i] == 0)
                continue;
            for (int j = i+1; j < 2*n; j++)
            {
                if (arr[j] == 0)
                    continue;
                int sum = arr[i] + arr[j];
                //cout << sum << " ";
                if (sum % m == 0)
                {
                    pairs++;
                    arr[j] = 0;
                    break;
                }
            }
            //cout << endl;
        }
        //deb(pairs);
        if (pairs >= p)
        {
            ans = m;
            break;
        }
    }
    
    fo(2*n)
    {
        arr[i] = orig[i];
    }

    vector<pair<int,int>> res;

    for (int i = 0; i < 2*n; i++)
    {
        if (arr[i] == 0)
            continue;
        for (int j = i+1; j < 2*n; j++)
        {
            if (arr[j] == 0)
                continue;
            int sum = arr[i] + arr[j];
            //cout << sum << " ";
            if (sum % ans == 0)
            {
                //cout << i+1 << " " << j+1 << endl;
                arr[j] = 0;
                res.push_back(make_pair(i+1, j+1));
                break;
            }
        }
    }

    for (int i = 0; i < p; i++)
    {
        cout << res[i].first << " " << res[i].second << endl;
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