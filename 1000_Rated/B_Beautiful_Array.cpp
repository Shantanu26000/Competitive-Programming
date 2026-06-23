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
        long long k, b, s;
        cin >> k >> b >> s;
        long long mini_sv = k * b;
        long long maxi_sv = k * b + n * (k - 1);
        if (mini_sv > s || s > maxi_sv)
        {
            cout << -1 << '\n';
        }
        else
        {
            vector<long long> ans(n, 0);
            ans[0] = k * b;
            s -= k * b;
            for (long long i = 0; i < n; i++)
            {
                long long add = min(k - 1, s);
                ans[i] += add;
                s -= add;
            }
            for (long long i = n - 1; i >= 0; i--)
            {
                cout << ans[i] << " ";
            }
            cout << '\n';
        }
    }
}