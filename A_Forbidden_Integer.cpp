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
        int n, k, x;
        cin >> n >> k >> x;
        if (k == 1 && x == 1)
        {
            cout << "NO" << '\n';
            continue;
        }
        if (x == 1)
        {
            if (n & 1 != 0)
            {
                if (k == 2 || k == 1)
                {
                    cout << "NO" << '\n';
                }
                else
                {
                    int two_times = n / 2 - 1;
                    cout << "YES" << '\n';
                    cout << two_times + 1 << '\n';
                    for (int i = 1; i <= two_times; i++)
                    {
                        cout << 2 << " ";
                    }
                    cout << 3 << '\n';
                }
            }
            else
            {
                cout << "YES" << '\n';
                cout << n / 2 << '\n';
                for (int i = 1; i <= n / 2; i++)
                {
                    cout << 2 << " ";
                }
                cout << '\n';
            }
        }
        else
        {
            cout << "YES" << '\n';
            cout << n << '\n';
            for (int i = 1; i <= n; i++)
            {
                cout << 1 << " ";
            }
            cout << '\n';
        }
    }
}