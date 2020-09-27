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

void max_heapify(vector<int> &arr, int i, int n)
{
    int l = left(i);
    int r = right(i);
    int largest;
    if (l < n && arr[l] > arr[i])
    {
        largest = l;
    }
    else
    {
        largest = i;
    }
    if (r < n && arr[r] > arr[largest])
    {
        largest = r;
    }
    if (i != largest)
    {
        //exchange arr[i] with arr[largest]
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        //again call max_heapify on arr[largest]
        max_heapify(arr, largest, n);
    }
}

void build_max_heap(vector<int> &arr, int n)
{
    for (int i = n/2 - 1; i >= 0; i--)
    {
        max_heapify(arr, i, n);
    }
}

int heap_extract_max(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 0)
    {
        cout << "Max: " << -1 << endl;
        return -1;
    }
    int max = arr[0];

    arr[0] = arr[n-1];
    arr.pop_back();
    //n = n-1;
    max_heapify(arr, 0, arr.size());

    //size = n;
    //cout << "Max: " << max << endl;
    return max;
}

void max_heap_increase_key(vector<int> &arr, int i, int key)
{
    if (key < arr[i])
        cout << "Key is less than current value" << endl;
    arr[i] = key;
    while (i >= 0 && arr[parent(i)] < arr[i])
    {
        int temp = arr[i];
        arr[i] = arr[parent(i)];
        arr[parent(i)] = temp;

        i = parent(i);
    }
    //cout << "Key updated" << endl;
}

void max_heap_insert(vector<int> &arr, int key)
{
    arr.push_back(INT_MIN);
    max_heap_increase_key(arr, arr.size()-1, key);
}

// min heap

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

int heap_extract_min(vector<int> &arr)
{
    int n = arr.size();

    if (n <= 0)
    {
        //cout << "Min: " << -1 << endl;
        return -1;
    }
    int min = arr[0];

    arr[0] = arr[n-1];
    arr.pop_back();
    //n = n-1;
    min_heapify(arr, 0, arr.size());

    //size = n;
    //cout << "Min: " << min << endl;
    return min;
}

void min_heap_decrease_key(vector<int> &arr, int i, int key)
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
    //cout << "Key updated" << endl;
}

void min_heap_insert(vector<int> &arr, int key)
{
    arr.push_back(INT_MAX);
    min_heap_decrease_key(arr, arr.size()-1, key);
}

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
    vector<int> minHeap;
    vector<int> maxHeap;
    int key, key1, key2;
    if (n == 1)
    {
        cin >> key;
        cout << fixed << setprecision(1) << (double) key << endl;
        return 0;
    }
    cin >> key1;
    cout << fixed << setprecision(1) << (double) key1 << endl;
    cin >> key2;
    cout << fixed << setprecision(1) << (double) (key1+key2) / 2 << endl;
    if (key1 > key2)
    {
        min_heap_insert(minHeap, key1);
        max_heap_insert(maxHeap, key2);
    }
    else
    {
        min_heap_insert(minHeap, key2);
        max_heap_insert(maxHeap, key1);
    }
    double median = key1+key2/2;
    for (int i = 2; i < n; i++)
    {
        cin >> key;
        if (key <= median)
        {
            max_heap_insert(maxHeap, key);
        }
        else
        {
            min_heap_insert(minHeap, key);
        }
        int diff = maxHeap.size() - minHeap.size();
        if (diff > 1)
        {
            //cout << "maxHeap" << endl;
            key = heap_extract_max(maxHeap);
            //cout << "insert" << endl;
            min_heap_insert(minHeap, key);
            //cout << "done" << endl;
        }
        else if (diff < -1)
        {
            //cout << "minHeap" << endl;
            key = heap_extract_min(minHeap);
            max_heap_insert(maxHeap, key);
        }
        //cout << "minHeap: " << minHeap.size() << " maxHeap: " << maxHeap.size() << endl;
        if (minHeap.size() == maxHeap.size())
        {
            //cout << "minHeap: " << minHeap[0] << " maxHeap: " << maxHeap[0] << endl;
            median = (double) (minHeap[0] + maxHeap[0]) / 2;
            cout << fixed << setprecision(1) << (double) (median) << endl;
        }
        else if (minHeap.size() > maxHeap.size())
        {
            median = minHeap[0];
            cout << fixed << setprecision(1) << (double) (median) << endl;
        }
        else
        {
            median = maxHeap[0];
            cout << fixed << setprecision(1) << (double) (median) << endl;
        }
    }
    return 0;
}