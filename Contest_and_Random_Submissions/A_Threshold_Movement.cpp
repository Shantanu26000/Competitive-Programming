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
        vector<long long> w(n);
        long long l = LLONG_MAX;
        long long r = LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> w[i];
            if ((i & 1) == 0)
                l = min(l, w[i]);
            else
                r = max(r, w[i]);
        }
        if ((n & 1) != 0)
        {
            cout << "NO" << '\n';
            continue;
        }

        if (r + 2 <= l)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}