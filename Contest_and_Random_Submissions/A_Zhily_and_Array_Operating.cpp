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

        vector<long long> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> dp(n);

        dp[n - 1] = a[n - 1];

        for (int i = n - 2; i >= 0; i--)
        {
            dp[i] = a[i] + max(0LL, dp[i + 1]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (dp[i] > 0)
                ans++;
        }

        cout << ans << '\n';
    }
}