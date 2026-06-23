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
        int n, q;
        cin >> n >> q;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long long> prefixsum(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefixsum[i + 1] = prefixsum[i] + a[i];
        }
        while (q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long ans = prefixsum[n] + (r - l + 1) * k - (prefixsum[r] - prefixsum[l - 1]);
            if ((ans & (long long)1) == 0)
            {
                cout << "No" << endl;
                continue;
            }
            else
            {
                cout << "Yes" << endl;
                continue;
            }
        }
    }
}