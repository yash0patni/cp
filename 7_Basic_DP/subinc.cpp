#include <iostream>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define ll long long

using namespace std;

int find_inc_sub_array(int *arr, int n)
{
    int count = 0;
    int b = 0, s = 0;
    fo(n)
    {
        if (i > 0 && arr[i] <= arr[i-1])
        {
            b = i;
            if (b - s >= 1)
                count++;
            s = i;
        }
        if (i == n-1)
            b = n - 1;
    }
    if (b - s >= 1)
        count++;
    return count;
}

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        int arr[n];
        fo(n)
            cin >> arr[i];
        int ans = n;
        ans += find_inc_sub_array(arr, n);
        cout << ans << endl;
    }
    return 0;
}