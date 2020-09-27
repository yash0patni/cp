#include <iostream>
#include <deque>
#define ll long long
#define testcase() int t; cin>>t; while(t--)
#define fo(n) for (ll i = 0; i < n; i++)
#define fos(s, n) for (ll j = s; j < n; j++)


using namespace std;
int main()
{
    testcase()
    {
        ll n;
        cin >> n;
        ll arr[n];
        fo(n)
            cin >> arr[i];
        ll k;
        cin >> k;
        deque<ll> q;
        ll i;
        for (i = 0; i < k; i++)
            if (arr[i] < 0)
                q.push_back(i);
        
        for ( ; i < n; i++)
        {
            if (q.empty())
                cout << "0 ";
            else
                cout << arr[q.front()] << " ";
            
            // delete all indexes < i-k
            while (!q.empty() && q.front() <= i-k)
                q.pop_front();
            
            if (arr[i] < 0)
            {
                q.push_back(i);
            }
        }
        if (q.empty())
            cout << "0 ";
        else
            cout << arr[q.front()] << " ";
    }
    return 0;
}