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

        int ans = 0;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1] || a[i] + a[i - 1] == 7)
            {
                ans++;

                for (int p = 1; p <= 6; p++)
                {
                    bool ok = true;
                    if (p == a[i - 1] || p + a[i - 1] == 7)
                        ok = false;

                    if (i + 1 < n)
                    {
                        if (p == a[i + 1] || p + a[i + 1] == 7)
                            ok = false;
                    }

                    if (ok)
                    {
                        a[i] = p;
                        break;
                    }
                }
            }
        }

        cout << ans << '\n';
    }

    return 0;
}