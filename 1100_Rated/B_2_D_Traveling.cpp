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
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<long long, long long>> cor(n);
        for (int i = 0; i < n; i++)
        {
            cin >> cor[i].first >> cor[i].second;
        }
        long long ans = LLONG_MAX;
        if (a <= k && b <= k)
            cout << 0 << '\n';
        else if (a <= k && b > k)
        {
            long long mini = LLONG_MAX;
            for (int i = 0; i < k; i++)
            {
                mini = min(mini, abs(cor[i].first - cor[b - 1].first) + abs(cor[i].second - cor[b - 1].second));
            }
            ans = min(ans, mini);
            cout << ans << '\n';
        }
        else if (a > k && b <= k)
        {
            long long mini = LLONG_MAX;
            for (int i = 0; i < k; i++)
            {
                mini = min(mini, abs(cor[i].first - cor[a - 1].first) + abs(cor[i].second - cor[a - 1].second));
            }
            ans = min(ans, mini);
            cout << ans << '\n';
        }
        else
        {
            if (k == 0)
            {
                cout << abs(cor[b - 1].first - cor[a - 1].first) + abs(cor[b - 1].second - cor[a - 1].second) << '\n';
            }
            else
            {
                long long mini1 = LLONG_MAX;
                for (int i = 0; i < k; i++)
                {
                    mini1 = min(mini1, abs(cor[i].first - cor[a - 1].first) + abs(cor[i].second - cor[a - 1].second));
                }

                long long mini2 = LLONG_MAX;
                for (int i = 0; i < k; i++)
                {
                    mini2 = min(mini2, abs(cor[i].first - cor[b - 1].first) + abs(cor[i].second - cor[b - 1].second));
                }
                long long mini3 = abs(cor[b - 1].first - cor[a - 1].first) + abs(cor[b - 1].second - cor[a - 1].second);
                long long result = min(mini1 + mini2, mini3);
                cout << result << '\n';
            }
        }
    }
}