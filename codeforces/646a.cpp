#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define ll long long

using namespace std;

int main()
{
    testcase()
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int odd = 0;
        int even = 0;
        fo(n)
        {
            cin >> arr[i];
            if (arr[i] & 1)
                odd++;
            else
                even++;
        }
        bool flag = false;
        for (int i = 1; i <= odd && i <= x; i += 2)
        {
            int need = x - i;
            if (need <= even)
                flag = true;
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}