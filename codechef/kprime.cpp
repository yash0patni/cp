#include <bits/stdc++.h>
#define testcase() int t; cin >> t; while(t--)
using namespace std;

const long int N = 100001;

vector<int> least_prime(N+1, 0);

void seive()
{
    least_prime[1] = 1;
    for (int i = 2; i <= N; i+=2)
        least_prime[i] = 2;
    for (int i = 3; i <= N; i+=2)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;

            for (int j = 2*i; j <= N; j += i)
            {
                if (least_prime[j] == 0)
                    least_prime[j] = i;
            }
        }
    }
}

int primefactor(int n)
{
    set<int> s;
    while (n != 1)
    {
        s.insert(least_prime[n]);
        n = n / least_prime[n];
    }
    return s.size();
}

int main()
{
    seive();
    testcase()
    {
        int a, b, k;
        cin >> a >> b >> k;
        int count_prime = 0;
        for (int i = a; i <= b; i++)
        {
            //cout << i << endl;
            int count = primefactor(i);
            
            if (count == k)
            {
                //cout << i << endl;
                count_prime++;
            }
            //cout << endl;
        }
        cout << count_prime << endl;
    }
    return 0;
}