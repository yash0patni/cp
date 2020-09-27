#include <iostream>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)
#define ll long long

using namespace std;

// O(n^2) - time comp
ll method1(ll *arr, int n)
{
    ll count = 0;
    fo(n)
    {
        fos(i+1, n)
        {
            if (arr[j] > arr[j-1])
            {
                count++;
                //cout << i << " " << j << endl;
            }
            else
                break;
        }
    }
    return count;
}

// O(n) - time comp
ll method2(ll *arr, int n)
{
    ll count = 0;
    int len = 1;
    fo(n-1)
    {
        if (arr[i+1] > arr[i])
            len++;
        else
        {
            count += ((len - 1) * len) / 2;
            len = 1;
        }
    }
    if (len > 1)
        count += ((len - 1) * len) / 2;
    return count;
}

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        ll arr[n];
        fo(n)
            cin >> arr[i];
        ll count = method2(arr, n);
        cout << count << endl;
    }
    return 0;
}