#include <iostream>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define ll long long

using namespace std;

int main()
{
    testcase()
    {
        string s;
        cin >> s;
        int n = s.length();
        int cnt = 0;
        for (int i = 0; i < n; )
        {
            if (s[i] == 'x')
            {
                if (s[i+1] == 'y')
                {
                    cnt++;
                    i += 2;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                if (s[i+1] == 'x')
                {
                    cnt++;
                    i += 2;
                }
                else
                {
                    i++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}