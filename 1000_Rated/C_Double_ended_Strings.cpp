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
        string a;
        cin >> a;
        string b;
        cin >> b;
        int n = a.size();
        int m = b.size();
        int lcs = 0;
        for (int len = 1; len <= min(n, m); len++)
        {
            for (int i = 0; i + len <= n; i++)
            {
                for (int j = 0; j + len <= m; j++)
                {
                    string Extract_a = a.substr(i, len);
                    string Extract_b = b.substr(j, len);
                    if (Extract_a == Extract_b)
                    {
                        lcs = max(lcs, len);
                    }
                }
            }
        }
        int ans = n + m - (2 * lcs);
        cout << ans << '\n';
    }
}