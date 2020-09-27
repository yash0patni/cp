#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

int minSpanSum(int *arr, int *brr, int n)
{
    int minSpan = 0;

    return minSpan;
}

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        int arr[n], brr[n];
        fo(n)
            cin >> arr[i];
        fo(n)
            cin >> brr[i];    
        cout << minSpanSum(arr, brr, n) << endl;
    }
    return 0;
}