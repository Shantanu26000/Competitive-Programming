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
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        int maxi = INT_MIN;
        int cnt = 0;
        int last = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i == 0 || last != a[i])
            {
                maxi = max(maxi, cnt);
                cnt = 1;
                last = a[i];
            }
            else
            {
                cnt++;
            }
        }
        maxi = max(maxi, cnt);
        if (maxi < m)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}