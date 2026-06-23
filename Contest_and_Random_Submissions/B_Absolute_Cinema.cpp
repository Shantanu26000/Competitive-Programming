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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        if (n == 1)
        {
            cout << a[0] + b[0] << '\n';
            continue;
        }
        long long ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > b[i])
            {
                ans += a[i];
                swap(b[i], a[i]);
            }

            else
            {
                ans += b[i];
            }
        }
        ans += *max_element(a.begin(), a.end());
        cout << ans << '\n';
    }
}