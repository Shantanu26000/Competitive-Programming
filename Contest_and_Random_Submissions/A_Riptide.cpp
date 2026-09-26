#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b || b == c || c == a)
        {
            cout << 0 << '\n';
            continue;
        }
        bool found = false;
        int round = 0;
        while (found == false)
        {

            if (a == b || b == c || c == a)
            {
                found = true;
                break;
            }
            if (a > b && c > b)
            {
                if (a > c)
                {
                    a -= 1;
                    b += 1;
                }
                else
                {
                    c -= 1;
                    b += 1;
                }
                round++;
            }
            else if (b > a && c > a)
            {
                if (b > c)
                {
                    b -= 1;
                    a += 1;
                }
                else
                {
                    c -= 1;
                    a += 1;
                }
                round++;
            }
            else
            {
                if (a > b)
                {
                    a -= 1;
                    c += 1;
                }
                else
                {
                    b -= 1;
                    c += 1;
                }
                round++;
            }
        }
        cout << round << '\n';
    }
}