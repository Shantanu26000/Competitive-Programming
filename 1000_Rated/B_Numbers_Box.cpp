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
        int count = 0;
        long long sum = 0;
        int mini = INT_MAX;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] < 0)
                    count++;
                sum += abs(a[i][j]);
                mini = min(mini, abs(a[i][j]));
            }
        }
        if ((count & 1) == 0)
            cout << sum << '\n';
        else
        {
            cout << sum - ((long long)2 * mini) << '\n';
        }
    }
}