#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define ll long long

using namespace std;

ll sum(ll p, ll q, ll r, ll a, ll b, ll c)
{
    ll s_eq = 10;
    ll s_a = a - p;
    ll s_b = b - q;
    ll s_c = c - r;
    //check if any one comes out to be zero
    //for s_a, s_b, s_c == 0
    if (s_a == 0)
    {
        if (s_b == s_c)
            s_eq = 1;
        else
            s_eq = 2;
    }
    else if (s_b == 0)
    {
        if (s_a == s_c)
            s_eq = 1;
        else
            s_eq = 2;
    }
    else if (s_c == 0)
    {
        if (s_a == s_b)
            s_eq = 1;
        else
            s_eq = 2;
    }
    if (s_a == 0 && s_b == 0)
        s_eq = 1;
    else if (s_b == 0 && s_c == 0)
        s_eq = 1;
    else if (s_a == 0 && s_c == 0)
        s_eq = 1;
    else if (p != a && q != b && r != c)
    {
        if (s_a == s_b)
        {
            if (s_a == s_c)
            {
                s_eq = 1;
            }
            else
            {
                s_eq = 2;
            }
        }
        else if (s_b == s_c)
        {
            if (s_b == s_a)
            {
                s_eq = 1;
            }
            else
            {
                s_eq = 2;
            }
        }
        else if (s_a == s_c)
        {
            if (s_a == s_b)
            {
                s_eq = 1;
            }
            else
            {
                s_eq = 2;
            }
        }
        else
        {
            s_eq = 3;
        }
    }
    
    return s_eq;
}

ll mul(ll p, ll q, ll r, ll a, ll b, ll c)
{
    ll d_a = -1;
    ll d_b = -2;
    ll d_c = -3;

    ll r_a = -1;
    ll r_b = -2;
    ll r_c = -3;
    ll dr_a = -1;
    ll dr_b = -1;
    ll dr_c = -1;

    if (p > 0)
    {
        dr_a = a / p;
        if (a == 0)
            r_a = p;
        else
            r_a = a % p;
    }
    if (q > 0)
    {
        dr_b = b / q;
        if (b == 0)
            r_b = q;
        else
            r_b = b % q;
    }
    if (r > 0)
    {
        dr_c = c / r;
        if (c == 0)
            r_c = r;
        else
            r_c = c % r;
    }
    cout << "r_a" << r_a << endl;
    cout << "r_b" << r_b << endl;
    cout << "r_c" << r_c << endl;
    ll d_eq = 10;
    ll d_0eq = 10;
    ll d_req = 10;

    if (p > 0 && a % p == 0)
        d_a = a / p;
    if (q > 0 && b % q == 0)
        d_b = b / q;
    if (r > 0 && c % r == 0)
        d_c = c / r;
    /*
    cout << "d_a" << d_a << endl;
    cout << "d_b" << d_b << endl;
    cout << "d_c" << d_c << endl;
    */
    //checking for p, q, r == 0
    if (p == 0 && q != 0 && r != 0)
    {
        if (d_b == d_c)
            d_0eq = 1;
        else
            d_0eq = 2;
        if (a != 0)
        {
            d_0eq += 1;
        }   
    }
    else if (q == 0 && p != 0 && r != 0)
    {
        if (d_a == d_c)
            d_0eq = 1;
        else
            d_0eq = 2;
        if (b != 0)
        {
            d_0eq += 1;
        }   
    }
    else if (r == 0 && p != 0 && q != 0)
    {
        if (d_a == d_b)
            d_0eq = 1;
        else
            d_0eq = 2;
        if (c != 0)
        {
            d_0eq += 1;
        }   
    }
    if (p == 0 && q == 0 && r != 0)
    {
        d_0eq = 1;
        if (a != 0)
            d_0eq += 1;
        if (b != 0)
            d_0eq += 1;
        if (a == b && a != 0)
            d_0eq -= 1;
    }
    else if (q == 0 && r == 0 && p != 0)
    {
        d_0eq = 1;
        if (b != 0)
            d_0eq += 1;
        if (c != 0)
            d_0eq += 1;
        if (b == c && b != 0)
            d_0eq -= 1;
    }
    else if (p == 0 && r == 0 && q != 0)
    {
        d_0eq = 1;
        if (a != 0)
            d_0eq += 1;
        if (c != 0)
            d_0eq += 1;
        if (a == c && a != 0)
            d_0eq -= 1;
    }
    else if (p == 0 && q == 0 && r == 0)
    {
        if (a == 0 && b != 0 && c != 0)
        {
            if (d_b == d_c)
                d_0eq = 1;
            else
                d_0eq = 2;
        }
        else if (b == 0 && a != 0 && c != 0)
        {
            if (d_a == d_c)
                d_0eq = 1;
            else
                d_0eq = 2;
        }
        else if (c == 0 && b != 0 && a != 0)
        {
            if (d_b == d_a)
                d_0eq = 1;
            else
                d_0eq = 2;
        }
        if (a == 0 && b == 0 && c != 0)
            d_0eq = 1;
        else if (b == 0 && c == 0 && a != 0)
            d_0eq = 1;
        else if (a == 0 && c == 0 && b != 0)
            d_0eq = 1;
        else
            d_0eq = 0;
    }

    cout << "d_0eq: " << d_0eq << endl;

    //for non zero:

    //for a,b,c = 0
    if (a == 0 && b != 0 && c != 0)
    {
        if (q == b && r == c)
            d_req = 1;
    }
    if (a == 0 && b == 0 && c == 0)
    {
        if (r_a == r_b)
        {
            if (r_a == r_c)
                d_req = 1;
            else
                d_req = 2;
        }
        else if (r_b == r_c)
        {
            if (r_b == r_a)
                d_req = 1;
            else
                d_req = 2;
        }
        else if (r_a == r_c)
        {
            if (r_a == r_b)
                d_req = 1;
            else
                d_req = 2;
        }
        else
            d_req = 3;
        return d_req;
    }

    // for other cases
    if (d_a == 1)
    {
        if (d_b == d_c)
            d_eq = 1;
        else
            d_eq = 2;
    }
    else if (d_b == 1)
    {
        if (d_a == d_c)
            d_eq = 1;
        else
            d_eq = 2;
    }
    else if (d_c == 1)
    {
        if (d_a == d_b)
            d_eq = 1;
        else
            d_eq = 2;
    }
    if (d_a == 1 && d_b == 1)
        d_eq = 1;
    else if (d_b == 1 && d_c == 1)
        d_eq = 1;
    else if (d_a == 1 && d_c == 1)
        d_eq = 1;
    else if (p != a && q != b && r != c)
    {
        if (d_a == d_b)
        {
            if (d_a == d_c)
            {
                d_eq = 1;
            }
            else
            {
                d_eq = 2;
            }
        }
        else if (d_b == d_c)
        {
            if (d_b == d_a)
            {
                d_eq = 1;
            }
            else
            {
                d_eq = 2;
            }
        }
        else if (d_a == d_c)
        {
            if (d_a == d_b)
            {
                d_eq = 1;
            }
            else
            {
                d_eq = 2;
            }
        }
        else
        {
            d_eq = 3;
        }
    }
    
    cout << "d_eq = "<< d_eq << endl << endl;
    return min(d_eq, d_0eq);
}

int main()
{
    testcase()
    {
        ll p, q, r;
        ll a, b, c;
        cin >> p >> q >> r;
        cin >> a >> b >> c;

        //check if no operation required
        if (p == a && q == b && r == c)
        {
            cout << "0" << endl;
            continue;
        }

        // sum
        ll s_eq = sum(p, q, r, a, b, c);
        cout << "s_eq = " << s_eq << endl;

        // multiplication

        ll m_eq = mul(p, q, r, a, b, c);
        cout << "m_eq = " << m_eq << endl;
        // reminder case

        ll r_a = -1;
        ll r_b = -1;
        ll r_c = -1;
        ll dr_a = -1;
        ll dr_b = -1;
        ll dr_c = -1;
        ll d_req = 10;

        if (p > 0)
        {
            dr_a = a / p;
            r_a = a % p;
        }
        if (q > 0)
        {
            dr_b = b / q;
            r_b = b % q;
        }
        if (r > 0)
        {
            dr_c = c / r;
            r_c = c % r;
        }

        cout << "min = "<< min(s_eq, m_eq) << endl << endl;
    }
    return 0;
}