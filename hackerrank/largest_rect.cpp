#include <bits/stdc++.h>

using namespace std;

// Complete the largestRectangle function below.
long largestRectangle(long *arr, long n) {
    long left, max_area = -1, cur_area, top = -1;
    long s[n];
    for (long i = 0; i <= n; i++)
    {
        while (top >= 0 && (i == n || arr[s[top]] > arr[i]))
        {
            if (top > 0)
                left = s[top-1];
            else
                left = -1;
            cur_area = (i - left - 1) * arr[s[top]];
            --top;
            max_area = max(max_area, cur_area);
        }
        if (i < n)
        {
            ++top;
            s[top] = i;
        }
    }
    return max_area;
}

int main()
{
    long n;
    cin >> n;
    long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << largestRectangle(arr, n) << endl;
    return 0;
}
