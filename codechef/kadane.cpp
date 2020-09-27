#include <bits/stdc++.h>
using namespace std;

int kadane(int *arr, int n)
{
    int max_so_far = INT_MIN;
    int max_end_here = 0;
    int start = 0;
    int end = 0; 
    int s = 0;
    vector<pair <int,int>> v;
    for (int i = 0; i < n; i++)
    {
        //cout << max_end_here << " " << max_so_far << endl;
        max_end_here += arr[i];
        if (max_so_far < max_end_here)
        {
            max_so_far = max_end_here;
            start = s;
            end = i;
            v.clear();
            v.push_back(make_pair(start, end));
        }
        else if (max_so_far == max_end_here)
        {
            start = s;
            end = i;
            v.push_back(make_pair(start, end));
        }
        if (max_end_here < 0)
        {
            max_end_here = 0;
            s = i + 1;
        }
        //cout << max_end_here << " " << max_so_far << endl << endl;
    }
    //for (auto x : v)
        //cout << x.first << " " << x.second << endl;
    return max_so_far;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int max_sum = kadane(arr, n);
    cout << max_sum << endl;
    return 0;
}