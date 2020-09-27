#include <bits/stdc++.h>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define fos(s, n) for (int j = s; j < n; j++)

using namespace std;

// 0 1 0 1 1 1 1 0

int calcMaxStreak(int *arr, int n)
{
    int maxStreak = 0;
    int cnt = 0;
    
    for (int i = 0; i < n;)
    {
        cnt = 0;
        while (i < n && arr[i] == 1)
        { 
            cnt++;
            i++;
        }
        maxStreak = max(maxStreak, cnt);
        while (i < n && arr[i] == 0)
        {
            i++;
        }
    }

    return maxStreak;
}

int main()
{
    //n is number of days
    //enter 0 if task is not done and enter 1 if task is done
    int n;
    cin >> n;
    int arr[n];
    fo(n)
        cin >> arr[i];
    int maxStreak = calcMaxStreak(arr, n);
    cout << "Max Streak: " << maxStreak << endl;
    return 0;
}