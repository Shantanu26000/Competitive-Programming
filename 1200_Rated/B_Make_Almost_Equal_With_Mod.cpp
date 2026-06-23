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
        {
            cin >> a[i];
        }

        long long ans = 0;
        for (int i = 1; i <= 60; i++)
        {
            set<long long> dist;
            long long k = 1LL << i;
            for (int j = 0; j < n; j++)
            {
                dist.insert(a[j] % k);
            }
            if (dist.size() == 2)
            {
                ans = k;
                break;
            }
        }
        cout << ans << '\n';
    }
}