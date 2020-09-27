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

/*
void heap_min(vector<int> &arr, int n)
{
    cout << arr[0] << endl;
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
*/

void heap_decrease_key(vector<int> &arr, int i, int key)
{
    if (key > arr[i])
        cout << "Key is greater than current value" << endl;
    arr[i] = key;
    while (i >= 0 && arr[parent(i)] > arr[i])
    {
        //cout << "while " << i << endl;
        int temp = arr[i];
        arr[i] = arr[parent(i)];
        arr[parent(i)] = temp;

        i = parent(i);
    }
    //cout << "Key updated" << i << endl;
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
    int q;
    cin >> q;
    vector<int> arr;
    while (q--)
    {
        int t, v;
        cin >> t;
        if (t == 1)
        {   
            cin >> v;
            heap_insert(arr, v);
        }
        if (t == 2)
        {
            cin >> v;
            auto i = arr.begin();
            for (i = arr.begin(); i != arr.end(); i++)
            {
                if (*i == v)
                {
                    break;
                }
            }
            arr.erase(i);
            build_min_heap(arr, arr.size());
        }
        if (t == 3)
        {
            cout << arr[0] << endl;
        }
    }
    return 0;
}