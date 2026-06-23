#include <bits/stdc++.h>
using namespace std;
int maxfreq(vector<long long> &a)
{
    unordered_map<long long, int> mp;
    int mx = 0;
    for (long long k : a)
    {
        mp[k]++;
        mx = max(mx, mp[k]);
    }
    return mx;
}
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
        if (n == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        if (n == 2)
        {
            if (a[0] == a[1])
                cout << 0 << '\n';
            else
                cout << 2 << '\n';
            continue;
        }
        int k = maxfreq(a);
        long long ans = 0;

        if (k == n)
        {
            cout << 0 << '\n';
        }
        else
        {
            int count = k;
            while (count < n)
            {
                ans += 1 + k;
                count = 2 * k;
                k *= 2;
            }
            ans -= (count - n);
            cout << ans << '\n';
        }
    }
}