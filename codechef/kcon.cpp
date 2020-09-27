#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll kadane(ll *arr, ll n, ll k)
{
    ll max_so_far = LONG_MIN;
    ll max_end_here = 0;
    for (ll i = 0; i < n*k; i++)
    {
        max_end_here += arr[i%n];
        if (max_so_far < max_end_here)
            max_so_far = max_end_here;
        if (max_end_here < 0)
            max_end_here = 0;
    }
    return max_so_far;
}

ll max_sub_k_sum(ll *arr, int n, int k)
{
    //calculate array sum
    ll sum = 0;
    ll max_sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    //calculate the max subarray sum by concateniting 2 arr
    ll max_sub_2_sum = kadane(arr, n, 2);
    //check if sum < 0
    if (sum < 0)
        max_sum = max_sub_2_sum;
    else
        max_sum = max_sub_2_sum + (k-2) * sum;
    return max_sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll max_sum = 0;
        if (k == 1)
            max_sum = kadane(arr, n, k);
        else
            max_sum = max_sub_k_sum(arr, n, k);
        cout << max_sum << endl;
    }
    return 0;
}