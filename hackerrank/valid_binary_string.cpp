#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    string s;
    int d;
    cin >> s;
    cin >> d;
    int n = s.length();
    int arr[n];
    fo(n)
    {
        arr[i] = s[i] == '0' ? 0 : 1;
    }
    int i = 0;
    int cnt, tcnt = 0;
    while (i < n)
    {
        cnt = 0;
        while (i < n && arr[i++] == 0)
            cnt++;
        //cout << cnt << endl;
        tcnt += cnt/d;
        while (i < n && arr[i] == 1)
            i++;
    }
    cout << tcnt << endl;
    return 0;
}