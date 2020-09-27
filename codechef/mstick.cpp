#include <bits/stdc++.h>
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (int i = 0; i < n; i++)
#define ll long long
#define deb(x) cout << #x << " = " << x << endl;

using namespace std;

void build(ll *tree, ll *arr, int index, int tl, int tr)
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
        tree[index] = min(tree[2*index], tree[2*index + 1]);
    }
}

ll query(ll *tree, int index, int tl, int tr, int l, int r)
{
    if (l > r)
        return LONG_MAX;
    // no overlap
    if (r < tl || l > tr)
    {
        return LONG_MAX;
    }
    // complete overlap
    if (tl >= l && tr <= r)
    {
        return tree[index];
    }
    // partial overlap
    int tm = tl + (tr - tl) / 2;
    ll lmin = query(tree, 2 * index, tl, tm, l, r);
    ll rmin = query(tree, 2 * index + 1, tm + 1, tr, l, r);
    return min(lmin, rmin);
}

// max segment tree
void build_max(ll *tree, ll *arr, int index, int tl, int tr)
{
    if (tl == tr)
    {
        tree[index] = arr[tl];
    }
    else
    {
        int tm = tl + (tr - tl) / 2;
        build_max(tree, arr, 2 * index, tl, tm);
        build_max(tree, arr, 2 * index + 1, tm + 1, tr);
        tree[index] = max(tree[2*index], tree[2*index + 1]);
    }
}

ll query_max(ll *tree, int index, int tl, int tr, int l, int r)
{
    // no overlap
    if (l > r)
        return 0;
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
    ll lmax = query_max(tree, 2 * index, tl, tm, l, r);
    ll rmax = query_max(tree, 2 * index + 1, tm + 1, tr, l, r);
    return max(lmax, rmax);
}

int main()
{
    int n;
    cin >> n;
    ll arr[n];
    fo(n)
        cin >> arr[i];
    int maxn = 4 * n + 1;
    int tl = 0, tr = n -1;
    ll tree[maxn];
    ll tree_max[maxn];
    build(tree, arr, 1, tl, tr);
    build_max(tree_max, arr, 1, tl ,tr);
    testcase()
    {
        int l, r;
        cin >> l >> r;
        double min = (double) query(tree, 1, tl, tr, l ,r);
        double max1 = (double) query_max(tree_max, 1, tl, tr, 0, l-1);
        double max2 = (double) query_max(tree_max, 1, tl, tr, r+1, n-1);
        double max3 = (double) query_max(tree_max, 1, tl, tr, l, r);
        max1 += min;
        max2 += min;
        double m = (min + (max3 - min) / 2.0);
        /*
        deb(min);
        deb(max1);
        deb(max2);
        deb(max3);
        deb(m);
        */
        cout << fixed << setprecision(1) << max(max(max1, max2), m) << endl;
    }
    return 0;
}