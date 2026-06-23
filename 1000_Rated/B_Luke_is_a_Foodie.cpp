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
        long long x;
        cin >> x;
        vector<long long> a(n);
        vector<pair<long long, long long>> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i].first = a[i] - x;
            b[i].second = a[i] + x;
        }
        pair<long long, long long> p = {b[0].first, b[0].second};
        int ans = 0;
        for (int i = 1; i < n; i++)
        {
            long long f = p.first;
            long long s = p.second;
            long long fi = b[i].first;
            long long si = b[i].second;
            long long L = max(f, fi);
            long long R = min(s, si);
            if (L > R)
            {
                ans++;
                p = {fi, si};
            }
            else
            {
                p = {L, R};
            }
        }
        cout << ans << '\n';
    }
}