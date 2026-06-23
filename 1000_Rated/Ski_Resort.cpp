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
        long long n, k;
        cin >> n >> k;
        long long q;
        cin >> q;
        vector<long long> a(n);
        long count = 0;
        vector<bool> p(n,false);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= q)
            {
                p[i] = true;
                count++;
            }
        }
        if (count < k)
            cout << 0 << '\n';
        else
        {
            long long ans = 0;
            long long curr = 0;
            for (int i = 0; i < n; i++)
            {
                if (p[i] == true)
                    curr++;
                else
                {
                    if (curr >= k)
                    {
                        ans += (curr + 1) * (curr - k + 1) - ((curr + k) * (curr - k + 1)) / 2;
                        curr = 0;
                    }
                    else
                    {
                        curr = 0;
                    }
                }
            }
            if (curr >= k)
                ans += (curr + 1) * (curr - k + 1) - ((curr + k) * (curr - k + 1)) / 2;

            cout << ans << '\n';
        }
    }
}