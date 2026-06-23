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
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> ans(n + 1);
        bool found = false;
        for (int i = 1; i <= n; i++)
        {
            int x = (l + i - 1) / i;
            int val = i * x;
            if (val > r)
            {
                found = true;
                break;
            }
            ans[i] = val;
        }
        if (found == true)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 1; i < n + 1; i++)
            {
                cout << ans[i] << " ";
            }
            cout << '\n';
        }
    }
}