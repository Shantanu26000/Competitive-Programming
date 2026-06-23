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
        long long k;
        cin >> k;
        vector<long long> a(n);
        vector<pair<long long, long long>> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
                p[i].first = a[i];
            else if (a[i] % k == 0)
                p[i].first = k;
            else
            {
                p[i].first = (a[i] % k);
            }
            p[i].second = i + 1;
        }
        sort(p.begin(), p.end(), [&](pair<long long, long long> p1, pair<long long, long long> p2)
             {
                if(p1.first!=p2.first) return p1.first>p2.first;
                 return p1.second<p2.second; });
        for (auto x : p)
        {
            cout << x.second << " ";
        }
        cout << endl;
    }
}