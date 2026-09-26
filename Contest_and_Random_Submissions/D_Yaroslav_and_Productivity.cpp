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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        vector<long long> prefix_sum(n);
        prefix_sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + a[i];
        }
        sort(b.begin(), b.end());
        int l = 0;
        long long ans = 0;
        for (int i = 0; i < m; i++)
        {
            int r = b[i] - 1;
            if (l == 0)
                ans += abs(prefix_sum[r]);
            else
                ans += abs(prefix_sum[r] - prefix_sum[l - 1]);
            l = r + 1;
        }
        if (b[m - 1] == n)
        {
            cout << ans << '\n';
        }
        else
        {
            int i = b[m - 1] - 1;
            ans += prefix_sum[n - 1] - prefix_sum[i];
            cout << ans << '\n';
        }
    }
}