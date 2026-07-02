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
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), b(q), prefix(n), prefix_max(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < q; i++)
            cin >> b[i];
        prefix[0] = a[0];
        prefix_max[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + a[i];
            prefix_max[i] = max(prefix_max[i - 1], a[i]);
        }
        for (int i = 0; i < q; i++)
        {
            int idx = upper_bound(prefix_max.begin(), prefix_max.end(), b[i]) - prefix_max.begin() - 1;
            if (idx == -1)
                cout << 0 << " ";
            else
                cout << prefix[idx] << " ";
        }
        cout << '\n';
    }
}