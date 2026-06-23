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
        int i = n - 1;
        while (i >= 0 && a[i] == a[n - 1])
        {
            i--;
        }
        if (i == -1)
        {
            cout << 0 << '\n';
            continue;
        }
        while (i >= 0)
        {
            i -= (n - 1 - i);
            ans++;
            while (i >= 0 && a[i] == a[n - 1])
            {
                i--;
            }
        }
        cout << ans << '\n';
    }
}