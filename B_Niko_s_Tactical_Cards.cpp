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
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        long long maxi = 0;
        long long mini = 0;
        for (int i = 0; i < n; i++)
        {
            long long mn = min({mini - a[i],
                                maxi - a[i],
                                b[i] - mini,
                                b[i] - maxi});
            long long mx = max({mini - a[i],
                                maxi - a[i],
                                b[i] - mini,
                                b[i] - maxi});

            maxi = mx;
            mini = mn;
        }
        cout << maxi << '\n';
    }
}