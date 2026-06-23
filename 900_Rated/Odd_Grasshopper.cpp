#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n;
        cin >> x >> n;
        if ((x & 1) == 0)
        {
            if (n % 4 == 0)
            {
                cout << x << '\n';
                continue;
            }
            else if (n % 4 == 1)
            {
                cout << x - n << '\n';
                continue;
            }
            else if (n % 4 == 2)
            {
                cout << 1 + x << '\n';
                continue;
            }
            else
            {
                cout << x + n + 1 << '\n';
                continue;
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << x << '\n';
                continue;
            }
            else if (n % 4 == 1)
            {
                cout << n + x << '\n';
                continue;
            }
            else if (n % 4 == 2)
            {
                cout << x - 1 << '\n';
                continue;
            }
            else
            {
                cout << x - n - 1 << '\n';
                continue;
            }
        }
    }
}