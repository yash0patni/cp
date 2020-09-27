#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        int b[n], g[n];
        fo(n)
            cin >> b[i];
        fo(n)
            cin >> g[i];
        sort(b, b+n);
        sort(g, g+n);
        int i = 0;
        int flag = 1;
        if (b[0] < g[0])
        {
            while (i < n)
            {
                if (i < n && b[i+1] < g[i])
                {
                    flag = 0;
                    break;
                }
                i++;
            }
        }
        else
        {
            while (i < n)
            {
                if (i < n && g[i+1] < b[i])
                {
                    flag = 0;
                    break;
                }
                i++;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}