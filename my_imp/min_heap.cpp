#include <bits/stdc++.h>
#define fo(n) for (int i = 0; i < n; i++)
using namespace std;

int parent(int i)
{
    return (i-1) / 2;
}

int left(int i)
{
    return 2*i + 1;
}

int right(int i)
{
    return 2*i + 2;
}

void min_heapify(vector<int> &arr, int i, int n)
{
    int l = left(i);
    int r = right(i);
    int lowest;
    if (l < n && arr[l] < arr[i])
    {
        lowest = l;
    }
    else
    {
        lowest = i;
    }
    if (r < n && arr[r] < arr[lowest])
    {
        lowest = r;
    }
    if (i != lowest)
    {
        //exchange arr[i] with arr[largest]
        int temp = arr[i];
        arr[i] = arr[lowest];
        arr[lowest] = temp;
        //again call max_heapify on arr[largest]
        min_heapify(arr, lowest, n);
    }
}


void build_min_heap(vector<int> &arr, int n)
{
    for (int i = n/2 - 1; i >= 0; i--)
    {
        min_heapify(arr, i, n);
    }
}

int heap_min(vector<int> &arr, int n)
{   
    if (n < 0)
        return -1;
    return arr[0];
}

int heap_extract_min(vector<int> &arr, int &size)
{
    int n = size;

    if (n <= 0)
    {
        cout << "Min: " << -1 << endl;
        return -1;
    }
    int min = arr[0];

    arr[0] = arr[n-1];
    arr.pop_back();
    n = n-1;
    min_heapify(arr, 0, n);

    size = n;
    cout << "Min: " << min << endl;
    return min;
}

void heap_increase_key(vector<int> &arr, int i, int key)
{
    if (key < arr[i])
        cout << "Key is less than current value" << endl;
    arr[i] = key;
    
    min_heapify(arr, i, arr.size());
    cout << "Key updated" << endl;
}

void heap_decrease_key(vector<int> &arr, int i, int key)
{
    if (key > arr[i])
        cout << "Key is greater than current value" << endl;
    arr[i] = key;
    while (i >= 0 && arr[parent(i)] > arr[i])
    {
        int temp = arr[i];
        arr[i] = arr[parent(i)];
        arr[parent(i)] = temp;

        i = parent(i);
    }
    cout << "Key updated" << endl;
}

void heap_insert(vector<int> &arr, int key)
{
    arr.push_back(INT_MAX);
    heap_decrease_key(arr, arr.size()-1, key);
}

/*
void heap_sort(int *arr, int n)
{
    build_max_heap(arr, n);
    for (int i = n-1; i > 0; i--)
    {
        //swap max with last element
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        //decrease size
        n = n-1;

        //call max_heapify on 0th index
        max_heapify(arr, 0, n);
    }
}
*/

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
    int c;
    fo(n)
    {
        cin >> c;
        arr.push_back(c);
    }
    print(arr, n);
    build_min_heap(arr, n);
    print(arr, n);
    heap_insert(arr, 0);
    print(arr, arr.size());
    return 0;
}