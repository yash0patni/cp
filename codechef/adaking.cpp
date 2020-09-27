#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mod 1000000007

using namespace std;

bool check(int cnt, int k)
{
    return cnt == k;
}

void solve()
{
    int k;
    cin >> k;
    vector<vector<char>> arr(8, vector<char> (8, 'X'));
    int cnt = 1;
    arr[3][3] = 'O';
    int n = 8;
    int p = 3, q = 3;
    int len = 1;
    while (1 /*p != n-1 && q != 0*/)
    {
        //print right
        for (int i = q+1; i <= q + len; i++)
        {
            if (cnt < k)
            {
                arr[p][i] = '.';
                cnt++;
            }
            else
            {
                break;
            }
        }
        q += len;
        if (cnt == k)
            break;
        //print down
        for (int i = p+1; i <= p + len; i++)
        {
            if (cnt < k)
            {
                arr[i][q] = '.';
                cnt++;
            }
            else
            {
                break;
            }
        }
        p += len;
        len++;
        if (cnt == k)
            break;
        //print left
        for (int i = q-1; i >= q - len; i--)
        {
            if (cnt < k)
            {
                arr[p][i] = '.';
                cnt++;
            }
            else
            {
                break;
            }
        }
        q -= len;
        if (cnt == k)
            break;
        //print up
        for (int i = p-1; i >= p - len; i--)
        {
            if (cnt < k)
            {
                arr[i][q] = '.';
                cnt++;
            }
            else
            {
                break;
            }
        }
        p -= len;
        len++;
        if (cnt == k)
            break;
    }

    arr[3][3] = 'O';

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << arr[i][j];
        }
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