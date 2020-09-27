#include <bits/stdc++.h>
#define testcase() int t; cin >> t; while (t--)
#define fo(n) for (int i = 0; i < n; i++)

using namespace std;

struct job
{
    int id;
    int d;
    int p;
};

bool compare_profit(job j1, job j2)
{
    return (j1.p > j2.p);
}

int main()
{
    testcase()
    {
        int n;
        cin >> n;
        vector<job> v;
        int id, d, p;
        job j;
        fo(n)
        {
            cin >> id >> d >> p;
            j.id = id;
            j.d = d;
            j.p = p;
            v.push_back(j);
        }
        sort(v.begin(), v.end(), compare_profit);
        int max_d = -1;
        fo(n)
        {
            if (max_d < v[i].d)
                max_d = v[i].d;
        }
        /*
        fo(n)
            cout << v[i].id << " " << v[i].d << " " << v[i].p << endl;
        */
        int gc[max_d] = {-1};
        fo(max_d)
            gc[i] = -1;
        //cout << gc[i] << endl;
        int profit = 0;
        int cnt = 0;
        fo (n)
        {
            j = v[i];
            d = j.d;
            --d;
            while (d >= 0 && gc[d] != -1)
            {
                d--;
            }
            if (gc[d] == -1)
            {
                gc[d] = j.id;
                cnt++;
                profit += j.p;
            }
            else
            {
                continue;
            }
        }
        cout << cnt << " " << profit << endl;
    }
    return 0;
}