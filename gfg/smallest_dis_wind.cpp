#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
#define fos(s, n) for (ll j = s; j < n; j++)

using namespace std;

/*
Approach: Basically a window of characters is maintained by using two pointers namely start and end. 
These start and end pointers can be used to shrink and increase the size of window respectively. 
Whenever the window contains all characters of given string, the window is shrinked from left side 
to remove extra characters and then its length is compared with the smallest window found so far.
If in the present window, no more characters can be deleted then we start increasing the size of the window
using the end until all the distinct characters present in the string are also there in the window. 
Finally, find the minimum size of each window.
*/

int main()
{
    testcase()
    {
        string s;
        cin >> s;
        ll n = s.length();
        unordered_map<char,ll> freq;
        ll i;
        ll dis_cnt = 0;
        for(i = 0; i < n; i++)
        {
            if (freq[s[i]] == 0)
                dis_cnt++;
            freq[s[i]]++;
        }
        //cout << dis_cnt << endl;
        unordered_map<char,ll> minmap;
        ll min_wind = LONG_MAX, cnt = 0;
        ll start = 0, end = 0;
        while (end < n)
        {
            if (minmap[s[end]] == 0)
                cnt++;
            minmap[s[end]]++;
            while (cnt == dis_cnt)
            {
                min_wind = min(min_wind, end-start);
                //cout << start << " " << end << endl;
                if (minmap[s[start]] == 1)
                    cnt--;
                minmap[s[start]]--;
                start++;
            }
            end++;
        }
        cout << min_wind+1 << endl;
    }
    return 0;
}