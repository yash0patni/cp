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

void ans(string s, string t)
{
    ll len = t.length();
    ll n = s.length();
    if (len > n)
    {
        cout << -1 << endl;
        return;
    }
    unordered_map<char,ll> freq_t;
    ll dis_cnt = len;
    for(ll i = 0; i < len; i++)
    {
        freq_t[t[i]]++;
    }
    //cout << dis_cnt << endl;
    unordered_map<char,ll> minmap;
    ll min_wind = LONG_MAX, cnt = 0;
    ll start = 0, end = 0;
    ll sm = -1, em = -1;
    while (end < n)
    {
        
        if (freq_t[s[end]] != 0 && minmap[s[end]] < freq_t[s[end]])
            cnt++;
        
        minmap[s[end]]++;

        while (cnt == dis_cnt)
        {
            if (end - start + 1 < min_wind)
            {
                min_wind = end - start + 1;
                sm = start;
                em = end;
            }
            if (freq_t[s[start]]  && minmap[s[start]] <= freq_t[s[start]])
                cnt--;    
            minmap[s[start]]--;
            start++;
        }
        end++;
    }
    /*cout << cnt << endl;
    for (auto x : minmap)
        cout << x.first << " " << x.second << endl;
    */    
    /*cout << min_wind << endl;
    cout << "small indexes == " << sm << " " << em << endl;*/
    if (sm == -1)
        cout << -1 << endl;
    else
        cout << s.substr(sm, min_wind) << endl;
}

int main()
{
    testcase()
    {
        string s, t;
        cin >> s;
        cin >> t;
        ans(s,t);
    }
    return 0;
}

/*
3
timetopractice
toc
luxaczasnzjpumonplpmptjefxpkfzijolsfbfsrambqjnqxntnghtnpyoktjybzzzzwtthxcqrsvazurkdvkujedvnyhcsvsvxtpbvwbakwwamtnlgtybejsoliviehybctmxpjmeiawjkybppdykdepxpfrjenfyomayyowizfaypzwrqrikesflnetfhxxadvxsudtxfsprjoxeeuysnlsdanlipxjynszyqxbxkjsdppyjqnvhocizglufstxzzglprsdlwcsbqttwnmtyjgkpmmhkdybyoiqvbaxalbgmaciihjpdutuwdvfelowomqqmlrdnpkhxehwtmjbrzdfovwieliwbvpzagjgvggwmxdybfbldqxlgtka
t
zoomlazapzo
oza
*/