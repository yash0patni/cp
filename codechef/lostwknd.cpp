#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    testcase()
    {
        int arr[5];
        int p;
        fo(5)
            cin >> arr[i];
        cin >> p;
        int sum = 0;
        fo(5)
        {
            arr[i] *= p;
            sum += arr[i];
            //cout << arr[i] << " ";
        }
        //cout << endl << sum << endl;
        double d = (double) sum / 120.0;
        //cout << d << endl;
        if (d <= 1.0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}