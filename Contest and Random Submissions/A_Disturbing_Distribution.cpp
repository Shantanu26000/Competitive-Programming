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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        long long ans = 0;
        int i = 0;
        while (i < n)
        {
            if (a[i] == 1)
            {
                int idx = i;
                while (idx < n && a[idx] == 1)
                {
                    idx++;
                }
                if (idx == n)
                {
                    ans += 1;
                    ans = ans % 676767677;
                    i = idx;
                }
                else
                {
                    ans += a[idx];
                    ans = ans % 676767677;
                    i = idx + 1;
                }
            }
            else
            {
                ans += a[i];
                ans = ans % 676767677;
                i++;
            }
        }
        cout << ans << '\n';
    }
}