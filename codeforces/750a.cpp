#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    fo(n)
        arr.push_back(5*(i+1));
    k = 240 - k;
    fos(1, n)
        arr[j] = arr[j-1] + arr[j];
    auto pos = lower_bound(arr.begin(), arr.end(), k);
    int i = pos - arr.begin();
    if (*pos > k)
        cout << i << endl;
    else if (pos == arr.end())
        cout << n << endl;
    else
        cout << i + 1 << endl;
    return 0;
}