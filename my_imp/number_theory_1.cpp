#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long
#define mod 1000000007

using namespace std;

ll binpow(ll x, int n)
{
    ll res = 1;
    while (n)
    {
        if (n&1)
            res *= x;
        x *= x;
        n >>= 1;
    }
    return res;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int d, x, y;
void extendedEuclid(int a, int b)
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
        int temp = x;
        x = y;
        y = temp - (a/b) * y;
    }
}

// O(m)
int modInverse1(int a, int m)
{
    a %= m;
    for (int b = 1; b < m; b++)
        if ((a*b) % m == 1)
            return b;
}

// a and m must be coprime
// O(log(m))

int modInverse2(int a, int m)
{
    extendedEuclid(a,m);
    return (x % m + m) % m;
}

// m is prime
// using fermat`s little theorem
// a^m-1 = 1 mod m
// a^-1 = a^m-2 mod m 
int modInverse3(int a, int m)
{
    return binpow(a, m-2) % m;
}

int main()
{
    //cout << binpow(2,5) << endl;
    deb(binpow(2,3));
    deb(gcd(8,4));
    int a = 7;
    int b = 4;
    extendedEuclid(a,b);
    cout << "gcd("<< a << "," << b <<"): " << d << endl;
    cout << a << " * " << x << " + " << b << " * " << y << " = " << d << endl;
    deb(modInverse1(4,5));
    deb(modInverse2(4,5));
    deb(modInverse3(4,7));
    return 0;
}