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
        int n, k, m;
        cin >> n >> k >> m;
        if (k > m)
        {
            cout << "NO" << '\n';
            continue;
        }
        vector<int> ans(n);
        int i = 0;
        while (i < n)
        {
            int count = 0;
            while (count != k - 1 && i < n)
            {
                ans[i] = 1;
                i++;
                count++;
            }
            if (i < n)
                ans[i] = m - (k - 1);
            i++;
        }
        cout << "YES" << '\n';
        for (auto it : ans)
            cout << it << " ";
        cout << '\n';
    }
}