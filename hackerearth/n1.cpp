#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

ll binpow(ll a, int b, int m)
{
    ll res = 1;
    while (b)
    {
        if (b&1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}

ll d, x, y;
void extendedEuclid(ll a, ll b)
{
    if (b == 0)
    {
        d = a;
        x = 1;
        y = 0;
    }
    else
    {
        extendedEuclid(b, a%b);
        ll temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
}
/*a
// O(m)
ll modInverse1(ll a, ll m)
{
    a %= m;
    for (int b = 1; b < m; b++)
        if ((a*b) % m == 1)
            return b;
}
*/
// a and m must be coprime
// O(log(m))

ll modInverse2(ll a, ll m)
{
    extendedEuclid(a,m);
    return (x % m + m) % m;
}

int main()
{
    ll a,b,c,m;
    cin >> a >> b >> c >> m;
    //cout << a << b << c << m;
    ll p1 = binpow(a,b,m);
    //cout << p1 << endl;
    ll cinv = modInverse2(c,m);
    //cout << cinv << endl;
    cout << (p1 * cinv) % m << endl;
    return 0;
}