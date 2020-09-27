#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

string subArrayExist(int *arr, int n)
{
    int sum = 0;
    map<int,int> m;
    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
        if (m[sum] != 0 || sum == 0)
            return "Yes";
        else
            m[sum]++;   
    }
    return "No";
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
        cout << subArrayExist(arr, n) << endl;
    }
    return 0;
}