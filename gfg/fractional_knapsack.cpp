#include <bits/stdc++.h>
#define testcase() int t; cin >> t; while (t--)
#define fo(n) for (int i = 0; i < n; i++)

using namespace std;

struct item
{
    int p;
    int w;
    double pw;
};

bool compare_ratio(item i1, item i2)
{
    return (i1.pw > i2.pw);
}

int main()
{
    testcase()
    {
        int n, m;
        cin >> n >> m;
        vector<item> v;
        int p, w;
        item it;
        fo (n)
        {
            cin >> p >> w;
            it.p = p;
            it.w = w;
            it.pw = (double) p/w;
            v.push_back(it);
        }
        sort(v.begin(), v.end(), compare_ratio);
        /*
        for (int i = 0; i < n; i++)
        {
            cout << v[i].p << " " << v[i].w << " " << v[i].pw << endl;
        }
        */
        double profit = 0;
        int i;
        for (i = 0; i < n; i++)
        {
            it = v[i];
            if (m > 0 && it.w < m)
            {
                m -= it.w;
                profit += it.p;
                //cout << "Rem wt: " << m << endl;
            }
            else
            {
                break;
            }
            
        }
        //cout << i << " " << it << endl;
        if (m > 0 && i < n)
        {
            profit += (double)(m * it.p) / it.w;
        }
        cout << fixed << setprecision(2) << profit << endl;
    }
    return 0;
}