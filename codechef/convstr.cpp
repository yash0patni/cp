#include <bits/stdc++.h>
#define ll long long
#define testcase() ll t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
using namespace std;

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        int flag = 0;
        //check if possible or not
        int cnta[26] = {0}, cntb[26] = {0};
        bool wrong[26] = {false};
        fo(n)
        {
            cnta[a[i] - 'a']++;
            cntb[b[i] - 'a']++;
            if (a[i] != b[i])
            {
                wrong[b[i] - 'a'] = true;
            }
            if (a[i] < b[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "-1" << endl;
            continue;
        }
        fo (26)
        {
            if (cntb[i] > 0)
            {
                if (cnta[i] == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "-1" << endl;
            continue;
        }

        // if possible then how ? 

        int k = 0;
        fo(26)
        {
            if (wrong[i])
                k++;
        }
        cout << k << endl;
        if (k > 0)
        {
            for (int i = 25; i >= 0; i--)
            {
                if (wrong[i])
                {
                    char c = (char) (i + 'a');
                    vector<int> v;
                    set<int> s;
                    fo(n)
                    {
                        if (c == b[i])
                        {
                            v.push_back(i);
                            s.insert(i);
                        }
                    }
                    fo(n)
                    {
                        if (c == a[i])
                        {
                            s.insert(i);
                        }
                    }
                    cout << s.size() << " ";
                    for (int x : s)
                    {
                        cout << x << " ";
                    }
                    for (int x : v)
                    {
                        a[x] = c;
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}