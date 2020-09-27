#include <bits/stdc++.h>
using namespace std;

const int n = 1000;

vector<int> least_prime(n+1, 0);

void seive()
{
    least_prime[1] = 1;
    for (int i = 2; i <= n; i+=2)
        least_prime[i] = 2;
    for (int i = 3; i <= n; i+=2)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;

            for (int j = 2*i; j <= n; j += i)
            {
                if (least_prime[j] == 0)
                    least_prime[j] = i;
            }
        }
    }
}

void print(int size)
{
    for (int i = 1; i <= size; i++)
    {
        cout << i << " -> " << least_prime[i] << endl;
    }
    cout << endl;
}

int main()
{
    seive();
    print(100);
    return 0;
}