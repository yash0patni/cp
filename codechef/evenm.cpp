#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define ll long long

using namespace std;

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        if (n & 1)
        {
            int x = 1;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << x << " ";
                    x++;
                }
                cout << endl;
            }
        }
        else
        {
            int x = 1;
            int arr[n][n];
            for (int i = 0; i < n; i++)
            {
                if (i&1)
                {
                    for (int j = n-1; j >= 0; j--)
                    {
                        arr[i][j] = x;
                        x++;
                    }
                }
                else
                {
                    for (int j = 0; j < n; j++)
                    {
                        arr[i][j] = x;
                        x++;
                    }   
                }
                //cout << endl;
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
        
    }
    return 0;
}