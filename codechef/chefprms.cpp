#include <bits/stdc++.h>
using namespace std;

const int N = 100;

int primes[N+1];
int semip[56];

void generatePrimes()
{
    //seive to generate prime numbers
    for (int i = 0; i < N; i++)
        primes[i] = 1;
    for (int i = 2; i <= N; i += 2)
    {
        primes[i] = 0;
    }
    for (int i = 3; i <= N; i++)
    {
        if (primes[i] == 1)
        {
            for (int j = i*i; j < N; j += i)
            {
                primes[j] = 0;
            }
        }
    }
    primes[2] = 1;
    primes[0] = primes[1] = 0;
    //count total prime numbers
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (primes[i] == 1)
        {
            count++;
        }
    }
    //store all prime numbers in primeNumber array
    int primeNumber[count], k = 0;
    for (int i = 0; i < N; i++)
    {
        if (primes[i] == 1)
        {
            primeNumber[k++] = i;
        }
    }
    //calculate all semiprimes upto 200 and store them in set sp
    set<int> sp;
    count = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (primeNumber[i] * primeNumber[j] < 200)
            {
                sp.insert(primeNumber[i] * primeNumber[j]);
                count++;
            }
        }
    }
    //inset all semiprimes number from sp to semip global array and then sort it
    int j = 0;
    for (auto x:sp)
        semip[j++] = x;
    sort(semip, semip+j);
}

int main()
{
    int t, n;
    generatePrimes();
    cin>>t;
    while (t--)
    {
        cin>>n;
        int flag = 0;
        for (int i = 0, j = 55; i <= j; )
        {
            int sum = semip[i] + semip[j];
            if (sum == n)
            {
                flag = 1;
                break;
            }
            else if (sum > n)
                j--;
            else
                i++;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}