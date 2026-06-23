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
        vector<pair<int, pair<int, int>>> ans;
        ans.push_back({1, {0, 0}});
        int l = 0;
        int r = 0;
        int len = 1;
        int i = 1;
        while (i < n)
        {   
            int count = 0 ;
            if (b[i - 1] <= b[i] )
            {   
                if(a[i-1]!=b[i-1] || a[i]!=b[i]) count++;
                l = i - 1;
                r = i;
                len = r - l + 1;
                int ne = i + 1;
                while (ne < n && b[ne - 1] <= b[ne])
                {   
                    if(a[ne-1]!=b[ne-1] || b[ne]!=a[ne]) count++;
                    r = ne;
                    len++;
                    ne++;
                }
                if(count>0)    ans.push_back({len, {l, r}});
                i = ne;
            }
            else
            {
                i++;
            }
        }
        sort(ans.rbegin(), ans.rend());
        cout << ans[0].second.first + 1 << " " << ans[0].second.second + 1 << '\n';
    }
}