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
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        vector<pair<int, int>> kk;
        for (int i = 0; i < n; i++)
        {
            kk.push_back({b[i], a[i]});
        }
        sort(kk.begin(), kk.end());
        long long ans = p;
        int rem = n-1;
        for (int i = 0; i < n && rem > 0; i++)
        {
            if (kk[i].first >= p)
                break;
            int take = min(rem, kk[i].second);
            ans += 1LL * take * kk[i].first;
            rem -= take;
        }
        ans += 1LL * rem * p;
        cout << ans << '\n';
    }
}