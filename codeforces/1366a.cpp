#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

int main()
{
    testcase()
    {
        ll a, b;
        cin >> a >> b;
        cout << min((a+b)/3, min(a,b)) << endl;
    }   
    return 0;
}