#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define ll long long

using namespace std;

void build(int *tree, int *arr, int index, int tl, int tr)
{
    if (tl == tr)
    {
        tree[index] = arr[tl];
    }
    else
    {
        int tm = tl + (tr - tl) / 2;
        build(tree, arr, 2 * index, tl, tm);
        build(tree, arr, 2 * index + 1, tm + 1, tr);
        tree[index] = tree[2*index] + tree[2*index + 1];
    }
}

int query(int *tree, int index, int tl, int tr, int l, int r)
{
    // no overlap
    if (r < tl || l > tr)
    {
        return 0;
    }
    // complete overlap
    if (tl >= l && tr <= r)
    {
        return tree[index];
    }
    // partial overlap
    int tm = tl + (tr - tl) / 2;
    int lsum = query(tree, 2 * index, tl, tm, l, r);
    int rsum = query(tree, 2 * index + 1, tm + 1, tr, l, r);
    return (lsum + rsum);
}

void update(int *tree, int index, int tl, int tr, int pos, int val)
{
    if (tl == tr)
    {
        tree[index] = val;
    }
    else
    {
        int tm = tl + (tr - tl) / 2;
        if (pos <= tm)
            update(tree, 2 * index, tl, tm, pos, val);
        else
            update(tree, 2 * index + 1, tm + 1, tr, pos, val);
        tree[index] = tree[2 * index] + tree[2 * index + 1];
    }
}

int main()
{
    int arr[] = {4, -1, 2, 0, -2, 5, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxn = 4 * n + 1;
    int tl = 0, tr = n -1;
    int tree[maxn];
    build(tree, arr, 1, tl, tr);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(tree, 1, tl, tr, l ,r) << endl;
        int pos, val;
        cin >> pos >> val;
        update(tree, 1, tl, tr, pos, val);
    }
    return 0;
}