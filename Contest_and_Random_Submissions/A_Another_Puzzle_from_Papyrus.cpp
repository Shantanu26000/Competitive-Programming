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
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        /// first try without shift
        int ans = 0;
        int i = 0;
        bool found = true;
        while (i < n)
        {
            if (a[i] < b[i])
            {
                found = false;
                break;
            }
            else
            {
                ans += a[i] - b[i];
            }
            i++;
        }

        /// shift + try
        int result = 0;
        bool ok = true;
        result += c;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            auto val = lower_bound(a.begin(), a.end(), b[i]);
            if (val != a.end())
            {
                int value = *val;
                result += (value - b[i]);
                a.erase(a.begin() + (val - a.begin()));
            }
            else
            {
                ok = false;
                break;
            }
        }
        if (found == false && ok == false)
            cout << -1 << '\n';
        else if (found == true && ok == false)
            cout << ans << '\n';
        else if (found == false && ok == true)
            cout << result << '\n';
        else
            cout << min(ans, result) << '\n';
    }
}