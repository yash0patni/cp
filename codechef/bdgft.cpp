#include <iostream>
#define testcase() int t; cin>>t; while(t--)
using namespace std;

int main()
{
    testcase()
    {
        string s;
        cin >> s;
        int n = s.length();
        int arr0[n], arr1[n];
        arr0[0] = (s[0] == '0') ? 1 : 0;
        arr1[0] = (s[0] == '1') ? 1 : 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0')
                arr0[i] = arr0[i-1] + 1;
            else
                arr0[i] = arr0[i-1];
            if (s[i] == '1')
                arr1[i] = arr1[i-1] + 1;
            else
                arr1[i] = arr1[i-1];
        }
        int pair = 0;
        /*
        for (int i = 0; i < n; i++)
        {
            cout << arr0[i] << " " << arr1[i] << endl;
        }
        */
        for (int i = 0; i*i+i < n; i++)
        {
            //cout << arr0[i] << " " << arr1[i] << endl;
            int t = 0;
            //t++;
            ++i;
            for (int j = (i*i)+i-1; j < n; j++,t++)
            {
                //cout << t << " " << j << endl;
                int cnt0 = (t > 0) ? abs(arr0[j] - arr0[t-1]) : arr0[j];
                int cnt1 = (t > 0) ? abs(arr1[j] - arr1[t-1]) : arr1[j];
                if (cnt0 == (cnt1 * cnt1))
                {
                    //cout << i << " " << j << endl;
                    pair++;
                }
            }
            --i;
        }
        cout << pair << endl;
    }
    return 0;
}