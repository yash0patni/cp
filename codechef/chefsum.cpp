#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for (int i = 0; i < n; i++)
	        cin >> arr[i];
	    int prefix[n];
	    prefix[0] = arr[0];
	    for (int i = 1; i < n; i++)
	        prefix[i] = prefix[i-1] + arr[i];
	    int suffix[n];
	    suffix[n-1] = arr[n-1];
	    for (int i = n-2; i >= 0; i--)
	        suffix[i] = suffix[i+1] + arr[i];
	    for (int i = 0; i < n; i++)
	        arr[i] = prefix[i] + suffix[i];
        for (int i = 0; i < n; i++)
	        cout << arr[i] << " ";
        cout << endl;
	    int min = arr[0];
	    int min_index = 0;
	    for (int i = 1; i < n; i++)
	    {
	        if (arr[i] < min)
	        {
	            min = arr[i];
	            min_index = i;// < min_index ? i : min_index;
	        }
	    }
	    cout << min_index + 1 << endl;
	}
	return 0;
}
