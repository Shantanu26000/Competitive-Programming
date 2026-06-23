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
        int n;
        cin >> n;
        if (n <= 9)
        {
            cout << n << '\n';
        }
        else if (n <= 100 && n > 9)
        {
            cout << 9 + (n / 10) << '\n';
        }
        else if (n <= 1000 && n > 100)
        {
            cout << 9 + (100 / 10) + (n / 100) - 1 << '\n';
        }
        else if (n <= 10000 && n > 1000)
        {
            cout << 9 + (100 / 10) + (1000 / 100) + (n / 1000) - 2 << '\n';
        }
        else if (n <= 100000 && n > 10000)
        {
            cout << 9 + (100 / 10) + (1000 / 100) + (10000 / 1000) + (n / 10000) - 3 << '\n';
        }
        else if (n <= 1000000 && n > 100000)
        {
            cout << 9 + (100 / 10) + (1000 / 100) + (10000 / 1000) + (100000 / 10000) + (n / 100000) - 4 << '\n';
        }
    }
}