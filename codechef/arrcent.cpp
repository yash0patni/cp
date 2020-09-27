#include <iostream>
#define testcase() int t; cin>>t; while(t--)
#define ll long long
#define MOD 1000000007
using namespace std;

const int N = 100001;

ll fact[N] = {1};
ll nctwo[N] = {1,1};
ll sumnctwo[N] = {1,1};

void calcfact()
{
    for (int i = 1; i < N; i++)
    {
        fact[i] = (i * fact[i-1]);
    }
}

void calcnctwo()
{
    for (int i = 2; i < N; i++)
    {
        nctwo[i] = (fact[i] / (fact[i-2] * 2));
    }
}

void calcsumnctwo()
{
    sumnctwo[2] = nctwo[2];
    for (int i = 3; i < N; i++)
    {
        sumnctwo[i] = (nctwo[i] + sumnctwo[i-1]);
    }
}

int main()
{   
    calcfact();
    calcnctwo();
    calcsumnctwo();
    testcase()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            ll sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                int d = abs(i-j) + 1;
                sum = (sum + (sumnctwo[d] * arr[j]));
                //cout << d << " ";
            }
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}