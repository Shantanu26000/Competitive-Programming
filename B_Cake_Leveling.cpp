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
        vector<int> a(n);
        vector<long long> prefix_sum(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        prefix_sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefix_sum[i] = a[i] + prefix_sum[i - 1];
        }
        vector<int> ans(n, 0);
        long long result = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            long long temp = (prefix_sum[i]) / (i + 1);
            result = min(temp, result);
            ans[i] = result;
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}