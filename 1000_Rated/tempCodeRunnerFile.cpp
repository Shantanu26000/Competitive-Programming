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

        vector<pair<int, int>> pp;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> a(m);
            for (int j = 0; j < m; j++)
                cin >> a[j];

            int mn = *min_element(a.begin(), a.end());

            int sec = INT_MAX;
            int cnt = 0;

            for (int x : a)
            {
                if (x == mn)
                {
                    cnt++;
                    if (cnt >= 2)
                    {
                        sec = mn;
                        break;
                    }
                }
                else
                {
                    sec = min(sec, x);
                }
            }

            pp.push_back({sec, mn});
        }

        sort(pp.begin(), pp.end());

        long long ans = 0;

  
        for (auto &p : pp)
            ans += p.first;

   
        ans -= pp[0].first;

       
        int gmin = INT_MAX;
        for (auto &p : pp)
            gmin = min(gmin, p.second);

        ans += gmin;

        cout << ans << '\n';
    }
}
