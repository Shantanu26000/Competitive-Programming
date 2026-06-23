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
        long long n, x, y;
        cin >> n >> x >> y;

        long long common_val = (x / (__gcd(x, y)) * y);
        long long common_factor = n / common_val;
        long long high_count = n / x;
        long long low_count = n / y;

        high_count -= common_factor;
        low_count -= common_factor;
        long long ans = high_count * (2 * n - high_count + 1) / 2;
        long long tempi = ((low_count) * (low_count + 1)) / 2;
        ans -= tempi;
        cout << ans << '\n';
    }
}