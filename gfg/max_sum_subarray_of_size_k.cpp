#include <iostream>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
#define fos(s, n) for (ll j = s; j < n; j++)


using namespace std;

ll calc_max_sum(ll *arr, ll n, ll k)
{
    ll max_sum = 0, sum = 0;
    fo(k)
        sum += arr[i];
    max_sum = sum;
    fos(k, n)
    {
        sum -= arr[j - k];
        sum += arr[j];
        max_sum = sum > max_sum ? sum : max_sum;
    }
    return max_sum;
}

int main()
{
    testcase()
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        fo(n)
            cin >> arr[i];
        ll max_sum = calc_max_sum(arr, n, k);
        cout << max_sum << endl;
    }
    return 0;
}