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
        vector<int> a(k);
        vector<pair<int, int>> arran(n);
        for (int i = 0; i < k; i++)
            cin >> a[i];
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            arran[i].first = b[i];
            arran[i].second = i + 1;
        }
        sort(arran.rbegin(), arran.rend());
        vector<int> ans;
        int idx = -1;
        for (int i = 0; i < n; i++)
        {
            if (arran[i].first != k + 1)
            {
                idx = i;
                break;
            }
        }
        if (idx == -1)
            idx = 0;
        for (int i = idx; i < n; i++)
        {
            int count = k + 1 - arran[i].first;
            ans.insert(ans.end(), count, arran[i].second);
        }

        cout << ans.size() << '\n';
        for (int r : ans)
            cout << r << " ";
        cout << '\n';
    }
}