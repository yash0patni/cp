#include <bits/stdc++.h>
#define fo(n) for (int i = 0; i < n; i++)
using namespace std;

void print(vector<int> &arr, int n)
{
    fo(n)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int key;
    cin >> key;
    arr.push_back(key);
    cout << fixed << setprecision(1) << (double) arr[0] << endl;
    for(int i = 1; i < n; i++)
    {
        cin >> key;
        int k = arr.size()-1;
        //int temp = arr[arr.size()];
        arr.push_back(key);
        while (k >= 0 && arr[k] > key)
        {
            arr[k+1] = arr[k];
            k--;
        }
        arr[k+1] = key;
        int j = arr.size();
        if (j & 1 == 1)
        {
            cout << fixed << setprecision(1) << (double) arr[j >> 1] << endl;
        }
        else
        {
            //cout << j << " " << j/2 << endl;
            //cout << arr[(j/2)] << " " << arr[(j/2) - 1] << " " << (double) (arr[j/2] + arr[(j/2) - 1])/2 << endl;
            cout << fixed << setprecision(1) << (double) (arr[j/2] + arr[(j/2) - 1])/2 << endl;
        }
    }
    return 0;
}