#include <bits/stdc++.h>
#define testcase() int t; cin >> t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        int arr[n];
        fo(n)
            cin >> arr[i];
        int i = 0;
        string ans = "YES";
        map<int,int> m;
        set<int> s;
        while (i < n)
        {
            int t = arr[i];
            int cnt = 0;
            while (arr[i] == t)
            {
                i++;
                cnt++;
            }
            if (m.find(t) != m.end())
            {
                ans = "NO";
                break;
            }
            if (s.find(cnt) != s.end())
            {
                ans = "NO";
                break;
            }
            m[t] = cnt;
            s.insert(cnt);
        }
        cout << ans << endl;
    }
    return 0;
}