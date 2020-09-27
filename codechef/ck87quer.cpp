#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll y;
        ll count = 0;
        cin >> y;
        for (ll b = 1; b <= 700; b++)
        {
            ll r = y-b;
            if (r < 0)
                break;
            //cout << r << endl;
            count += floor(sqrt(r));
            /*
            for (int i = 1; i * i <= r; i++)
            {
                cout << i << " " << b << endl;
                count++;
            }
            */
        }
        cout << count << endl;
    }
    return 0;
}