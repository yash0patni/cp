#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define deb(x) cout << #x << " = " << x << endl;
#define ll long long

using namespace std;

const ll N = 150000;

vector<bool> prime(N+1, true);

void seive()
{
    for (ll i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            for (ll j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    prime[0] = prime[1] = false;
}

vector<ll> primenm;

void print()
{
    for (int i = 2; i <= N; i++)
    {
        if (prime[i])
        {
            //cout << i << " ";
            primenm.push_back(i);
        }
    }
    //cout << endl;
    //cout << primenm.size() << endl;
}

int main()
{
    seive();
    print();
    testcase()
    {
        int n;
        cin >> n;
        cout << primenm[n-1] << endl;
    }
    return 0;
}