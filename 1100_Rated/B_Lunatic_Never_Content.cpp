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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
            cout << 0 << '\n';
        else
        {
            int times = n / 2;
            int ans = 0;
            int i = 0;
            while (times--)
            {
                ans = __gcd(ans, abs(a[i] - a[n - i - 1]));
                i++;
            }
            cout << ans << '\n';
        }
    }
}