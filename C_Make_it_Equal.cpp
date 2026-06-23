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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            int r = a[i] % k;
            a[i] = max(r, k - r);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            int r = b[i] % k;
            b[i] = max(r, k - r);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a == b)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}