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
        long long c;
        cin >> n >> c;
        vector<long long> a(n);
        int pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] -= c;
            if (a[i] > 0)
                pos++;
        }
        sort(a.begin(), a.end());
        int m = (n + 1) / 2;
        int k = max(m, pos);
        long long ans = 0;
        for (int i = n - k; i < n; i++)
        {
            ans += a[i];
        }
        cout << ans << '\n';
    }
}