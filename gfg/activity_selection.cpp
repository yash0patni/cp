#include <bits/stdc++.h>
#define testcase() int t; cin >> t; while (t--)
#define fo(n) for (int i = 0; i < n; i++)

using namespace std;

struct activ
{
    int start;
    int end;
};

bool compare(activ j1, activ j2)
{
    return (j1.end < j2.end);
}

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        vector<activ> v;
        int s[n];
        int e[n];
        activ a;
        fo(n)
            cin >> s[i];
        fo(n)
            cin >> e[i];
        fo(n)
        {
            a.start = s[i];
            a.end = e[i];
            v.push_back(a);
        }
        sort(v.begin(), v.end(), compare);
        
        //set<activ> finalset;
        //finalset.insert(v[0]);
        int cnt = 1;
        activ last = v[0];
        for (int i = 1; i < n; i++)
        {
            a = v[i];
            if (a.start >= last.end)
            {
                cnt++;
                //finalset.insert(a);
                last = a;
            }
        }
        /*for (auto act : finalset)
        {
            cout << *act.start << " " << *act.end << endl;
        }*/
        cout << cnt << endl;
        
    }
    return 0;
}