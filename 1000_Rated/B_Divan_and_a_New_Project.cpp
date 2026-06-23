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
        vector<long long> a(n);
        vector<pair<long long, int>> ap(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ap[i].first = a[i];
            ap[i].second = i + 1;
        }
        sort(ap.rbegin(), ap.rend());
        int factor = 1;
        int i = 0;
        while (n > i)
        {
            ap[i].first = 2 - factor;
            i++;
            if (i < n)
                ap[i].first = 2 + factor;
            factor++;
            i++;
        }
        sort(ap.begin(), ap.end(), [](const pair<long long, int> &a, const pair<long long, int> &b)
             { return a.second < b.second; });
        vector<long long> ans(n + 1);
        ans[0] = 2;
        for (int i = 0; i < n; i++)
        {
            ans[i + 1] = ap[i].first;
        }
        long long result = 0;
        for (int i = 0; i < n; i++)
        {
            long long temp = 2 * (abs(2 - ans[i + 1]));
            temp *= a[i];
            result += temp;
        }
        cout << result << '\n';
        for (auto it : ans)
            cout << it << " ";
        cout << '\n';
    }
}