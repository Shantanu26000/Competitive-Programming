#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (((n * n) - k) == 1)
        {
            cout << "NO" << '\n';
            continue;
        }
        vector<vector<char>> ans(n, vector<char>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n - 1)
                    ans[i][j] = 'L';
                else
                    ans[i][j] = 'R';
            }
        }

        for (int i = 0; i < n && k > 0; i++)
        {
            for (int j = 0; j < n && k > 0; j++)
            {
                if (j == n - 1)
                    ans[i][j] = 'R';
                else if (j == n - 2 && k == 1)
                {
                    ans[i][j] = 'L';
                    ans[i][j + 1] = 'D';
                }
                else
                    ans[i][j] = 'L';
                k--;
            }
        }

        cout << "YES" << '\n';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ans[i][j];
            }
            cout << '\n';
        }
    }
}