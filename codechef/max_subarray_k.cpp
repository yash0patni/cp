#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        deque<int> q(k);
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        //need to process starting k elements
        int i;
        for (i = 0; i < k; i++)
        {
            while (!q.empty() && arr[i] >= arr[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        for ( ; i < n; i++)
        {
            //print the max from previous window
            cout << arr[q.front()] << " ";

            //delete all elements of previous window ie, delete all indexes from q which are <= i - k
            while (!q.empty() && q.front() <= i-k)
                q.pop_front();
            
            //delete all currently added elements from current window which are less than current element
            while (!q.empty() && arr[i] >= arr[q.back()])
                q.pop_back();
            
            //add the index of current element to the window
            q.push_back(i);
        }
        cout << arr[q.front()] << endl;
    }
    return 0;
}