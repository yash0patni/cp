#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

void subArrayExist(int *arr, int n, int k)
{
    int sum = 0, start = 0;
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
        if (sum > k)
        {
            while (sum > k)
            {
                sum -= arr[start++];
            }
        }
        if (sum == k)
        {
            cout << start+1 << " " << j+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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