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
        long long h;
        cin >> h;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<pair<long long, long long>> bc(m);
        vector<long long> temp(n);
        vector<long long> last(n, 0);
        long long version = 1;
        for (int i = 0; i < m; i++)
        {
            cin >> bc[i].first >> bc[i].second;
            if (last[bc[i].first - 1] != version)
            {
                temp[bc[i].first - 1] = a[bc[i].first - 1];
                last[bc[i].first - 1] = version;
            }
            temp[bc[i].first - 1] += bc[i].second;
            if (temp[bc[i].first - 1] > h)
            {
                version++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (last[i] == version)
                cout << temp[i] << " ";
            else
                cout << a[i] << " ";
        }
        cout << '\n';
    }
}