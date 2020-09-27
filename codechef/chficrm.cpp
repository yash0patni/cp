#include <iostream>
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
        int arr[n];
        int flag = 0;
        int cnt[3] = {0,0,0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            //cin >> arr[i];
            if (i == 0 && arr[i] != 5)
            {
                flag = 1;
                break;
            }
            if (arr[i] == 5)
            {
                cnt[0]++;
            }
            if (arr[i] == 10)
            {
                if (cnt[0] > 0)
                {
                    cnt[0]--;
                    cnt[1]++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
            if (arr[i] == 15)
            {
                if (cnt[1] > 0)
                {
                    cnt[1]--;
                    cnt[2]++;
                }
                else if (cnt[0] > 1)
                {
                    cnt[0]-=2;
                    cnt[2]++;
                }
                else
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}