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
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << "NO" << '\n';
            continue;
        }

        if (y == 0)
        {
            if (x % 3 == 0 || x % 6 == 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else if (y < 0)
        {
            x -= (4 * abs(y));
            if (x < 0)
                cout << "NO" << '\n';
            else if (x % 3 == 0 || x % 6 == 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
        else
        {
            x -= (2 * y);
            if (x < 0)
                cout << "NO" << '\n';
            else if (x % 3 == 0 || x % 6 == 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}