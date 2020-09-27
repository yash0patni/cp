#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

int equi_sub(int *arr, int n)
{
    int freq[101] = {0};
    int len = 0;
    fo(n)
    {
        if (freq[arr[i]] == 0)
            len++;
        freq[arr[i]]++;
    }
    cout << len << endl;
    int sum = 0, cnt = 0;
    int start = 0;
    int minmap[101] = {0};
    for (int j = 0; j < n; j++)
    {   
        if (minmap[arr[j]] == 0)
            cnt++;
        minmap[arr[j]]++;
        while (cnt == len)
        {
            sum += n - j;
            if (minmap[arr[start]] <= 1)
                cnt--;
            minmap[arr[start]]--;
            start++;
        }
    }
    return sum;
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
        int ans = equi_sub(arr, n);
        cout << ans << endl;
    }
    return 0;
}