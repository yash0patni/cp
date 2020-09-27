//agrawalshubhani@gmail.com
#include <bits/stdc++.h>

using namespace std;

int main()
{
    //input
    int n;
    cin >> n;
    string s;
    cin >> s;

    //calculations
    //count initial A and B
    int a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        if (s[i] == 'B')
            b++;
    }
    
    //count starting neutral voters
    int i;
    for (i = 0; s[i] == '-'; i++)
        ;
    if (s[i] == 'A')
        a += i;

    int st = i;

    //count for others
    while (i < n)
    {
        while (i < n && s[i] == '-')
            i++;
        if (i == n)
            break;
        //if current if A then all neutral to the left will become A
        if (s[i] == 'A')
        {
            if (st == i)
                i++;
            else
            {
                a += i - st - 1;
                st = i;
                i++;
            }
        }
        else //else current will be B then B will move right and we will find A which will move to the left 
        {
            st = i;
            i++;
            while (i < n && s[i] == '-')
                i++;
            if (i == n)
                b += i - st - 1;
            else
            {
                if (s[i] == 'A')
                {
                    a += (i-st-1) / 2;
                    b += (i-st-1) / 2;
                    st = i;
                    i++;
                }
                else
                    b += i - st - 1;
            }
        }
    }

    //output
    if (a > b)
        cout << "A";
    else if (b > a)
        cout << "B";
    else
        cout << "Coalition government";

    return 0;
}