#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

void subArrayExist(int *arr, int n, int k)
{
    int sum = 0;
    int max_wind = 0;
    unordered_map<int,int> hmap;
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
        int y = (sum%k+k)%k;
        if (y == 0)
        {
            max_wind = j+1;
        }
        if (hmap.find(y) == hmap.end())
        {
            hmap[y] = j;
        }
        if (hmap.find(y) != hmap.end())
        {
            max_wind = max(max_wind, j-hmap[y]);
        }
    }
    cout << max_wind << endl;
}

int main()
{
    testcase()
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        fo(n)
            cin >> arr[i];
        subArrayExist(arr, n, k);
    }
    return 0;
}