#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    const int mod = 676767677;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int sum = abs(x - y);
        int ans = 0;
        if (sum == 0)
        {
            cout << 1 << '\n';
        }
        else
        {
            for (int i = 1; i * i <= sum; i++)
            {
                if (sum % i == 0)
                {
                    ans++;
                    if (sum != i * i)
                        ans++;
                }
            }
            ans = ans % mod;
            cout << ans << '\n';
        }
        for (int i = 0; i < x; i++)
            cout << 1 << " ";
        for (int i = 0; i < y; i++)
            cout << -1 << " ";
        cout << '\n';
    }
}