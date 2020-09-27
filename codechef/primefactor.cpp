#include <bits/stdc++.h>
using namespace std;

int primefactor(int n)
{
    set<int> pf;
    while (n%2 == 0)
    {
        pf.insert(2);
        //cout << 2 << " ";
        n = n/2;
    }
    for (int i = 3; i*i <= n; i += 2)
    {
        while (n%i == 0)
        {
            pf.insert(i);
            //cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
    {
        pf.insert(n);
        //cout << n << endl;
    }
    /*for (auto x : pf)
        cout << x << " ";*/
    //cout << pf.size() << endl;
    return pf.size();
}

int main()
{
    int n;
    cin >> n;
    primefactor(n);
    return 0;
}