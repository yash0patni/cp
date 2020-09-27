#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

void subArrayExist(int *arr, int n, int k)
{
    int sum = 0, start = 0;
    int max_wind = 0;
    unordered_map<int,int> hmap;
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
        if (hmap.find(sum) == hmap.end())
        {
            hmap[sum] = j;
        }
        if (sum == k)
        {
            max_wind = max(j+1, max_wind);
        }
        if (hmap.find(sum-k) != hmap.end())
        {
            max_wind = max(max_wind, j-hmap[sum-k]);
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