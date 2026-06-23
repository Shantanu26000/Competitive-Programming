#include <bits/stdc++.h>
using namespace std;
int main()
{
    const long long mod = 1e9 + 7;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        long long ans = 1;
        for (int i = 0; i < n; i++)
        {
            int idx = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            int count = n - idx;
            ans = ans * (max((count - i) * 1LL, 0LL)) % mod;
        }
        cout << ans << '\n';
    }
}