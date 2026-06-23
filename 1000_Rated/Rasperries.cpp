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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & 1) == 0)
                even++;
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] % k) == 0)
            {
                ans = 0;
                break;
            }
            else
            {
                int v = ceil((double)a[i] / k);
                int tempans = v * k - a[i];
                if (tempans > 0)
                    ans = min(tempans, ans);
                else
                    continue;
            }
        }
        if (k == 4)
        {
            if (even >= 2)
                ans = min(ans, 0);
            else if (even == 1)
                ans = min(ans, 1);
            else
                ans = min(ans, 2);
        }
        cout << ans << '\n';
    }
}