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
        vector<long long> prefix_sum(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        prefix_sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = prefix_sum[i - 1] + a[i];
        }
        long long ans = LLONG_MIN;
        long long temp = 0;
        for (int i = n - 2; i >= 0; i--)
        {
            temp += a[i + 1];
            long long result = __gcd(temp, prefix_sum[i]);
            ans = max(ans, result);
        }
        cout << ans << '\n';
    }
}