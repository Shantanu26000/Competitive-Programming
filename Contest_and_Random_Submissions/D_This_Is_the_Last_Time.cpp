#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> a(n, vector<int>(3));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= 2; j++)
                cin >> a[i][j];
        }
        sort(a.begin(), a.end(), [](vector<int> &b, vector<int> &c)
             { return b[2] > c[2]; });
        int index = 0;
        int ans = k;
        for (int i = 0; i < n; i++)
        {
            if (k >= a[i][0] && k <= a[i][1])
            {
                ans = max(a[i][2],ans);
                index = i;
                break;
            }
        }
        for (int i = index-1; i >= 0; i--)
        {
            if (ans >= a[i][0] && ans <= a[i][1])
            {
                ans = max(ans, a[i][2]);
            }
        }
        cout << ans << '\n';
    }
}