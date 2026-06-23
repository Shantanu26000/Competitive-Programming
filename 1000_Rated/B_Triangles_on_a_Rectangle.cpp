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
        long long h, w;
        cin >> h >> w;
        long long ans = 0;
        for (int i = 0; i < 2; i++)
        {
            long long k1;
            cin >> k1;
            vector<long long> a(k1);
            for (int j = 0; j < k1; j++)
                cin >> a[j];
            long long temp = (a[k1 - 1] - a[0]) * w;
            ans = max(ans, temp);
        }
        for (int i = 0; i < 2; i++)
        {
            long long k2;
            cin >> k2;
            vector<long long> b(k2);
            for (int j = 0; j < k2; j++)
                cin >> b[j];
            long long temp = (b[k2 - 1] - b[0]) * h;
            ans = max(ans, temp);
        }
        cout << ans << '\n';
    }
}