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
        int n, k;
        cin >> n >> k;
        vector<char> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (k > (n / 2))
        {
            cout << -1 << '\n';
            continue;
        }
        int idx_r = n - k - 1;
        int idx_l = k;
        int ans = 0;
        for (int i = idx_r + 1; i < n; i++)
        {
            if (a[i] == 'R')
                ans++;
        }
        for (int i = 0; i < k; i++)
        {
            if (a[i] == 'L')
                ans++;
        }
        cout << ans << '\n';
    }
}