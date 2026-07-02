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
        vector<int> x(n), y(n);
        for (int i = 0; i < n; i++)
            cin >> x[i];
        for (int i = 0; i < n; i++)
            cin >> y[i];
        vector<int> diff(n);
        for (int i = 0; i < n; i++)
        {
            diff[i] = y[i] - x[i];
        }
        sort(diff.rbegin(), diff.rend());
        int i = 0;
        int j = n - 1;
        int ans = 0;
        while (i < j)
        {
            int val = diff[i] + diff[j];
            if (val >= 0)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                j--;
            }
        }
        cout << ans << '\n';
    }
}