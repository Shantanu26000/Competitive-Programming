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
        vector<int> factors;
        for (int i = 1; i * i <= n; i++)
        {
            if ((n % i) == 0)
            {
                factors.push_back(i);
                if (i != (n / i))
                    factors.push_back(n / i);
            }
        }
        long long ans = LLONG_MIN;
        int k = factors.size();
        for (int i = 0; i < k; i++)
        {
            vector<long long> prefix(n / factors[i], 0);
            for (int j = 0; j < n; j++)
            {
                prefix[j / factors[i]] += a[j];
            }
            sort(prefix.begin(), prefix.end());
            ans = max(ans, prefix.back() - prefix[0]);
        }
        cout << ans << '\n';
    }
}