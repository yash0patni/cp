#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    char alpha[26];
    char c = 'a';
    fo (26)
    {
        alpha[i] = c;
        c++;
    }/*
    fo(26)
        cout << alpha[i] << " ";
    cout << endl;*/
    vector<int> v;
    n;
    while (n > 26)
    {
        int r = n % 26;
        if (r == 0)
        {
            n--;
            r = 26;
        }
        v.push_back(r);
        //deb(r);
        n /= 26;
    }
    //deb(n);
    v.push_back(n);
    for (int i = v.size() - 1; i >= 0; i--)
    {
        int index = v[i]-1;
        cout << alpha[index];
    }
    cout << endl;
}

int main()
{
    //testcase()
    {
        solve();
    }
    return 0;
}