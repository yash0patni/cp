#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

int maxLen1(int *arr, int n)
{
    // 0 1 0 1
    // -1 1 -1 1
    //1 0 1 1 1 0 0
    //1 0 1 2 3 2 1
    int mlen = 0;
    int s = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = arr[i] == 1 ? 1 : -1;
        for (int j = i + 1; j < n; j++)
        {
            sum += arr[j] == 1 ? 1 : -1;
            if (sum == 0 && mlen < j-i+1)
            {
                mlen = j-i+1;
                s = i;
                e = j;
            }
        }
    }
    cout << s << " " << e << endl;
    return mlen;
}

int maxLen2(int *arr, int n)
{
    //change 0 to -1
    for (int i = 0; i < n; i++)
        arr[i] = (arr[i] == 1)? 1 : -1;
    
    //max wind for 0 sum 
    int mlen = 0, sum = 0;
    int s = 0, e = 0;
    map<int,int> hmap;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        //cout << sum << endl;
        if (sum == 0)
        {
            s = 0;
            e = i;
            mlen = i+1;
        }
        else if (hmap.find(sum) != hmap.end())
        {
            if (mlen < i-hmap[sum])
            {
                mlen = i-hmap[sum];
                s = hmap[sum]+1;
                e = i;
            }
        }
        else
        {
            hmap[sum] = i;
        }
        //cout << hmap[sum] << endl;
    }
    cout << s << " " << e << endl;
    return mlen;
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
        //int len = maxLen1(arr, n);
        int len = maxLen2(arr, n);
        cout << len << endl;
    }
    return 0;
}