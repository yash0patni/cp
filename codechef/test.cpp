#include <iostream>
#include <cmath>
using namespace std;

int logbase2(int n)
{
    int cnt = 0;
    while (1 << (cnt+1) <= n)
        cnt++;
    return cnt;
}

int main()
{
    int n;
    cin >> n;
    int lb2 = logbase2(n);
    cout << lb2 << endl;
    return 0;
}