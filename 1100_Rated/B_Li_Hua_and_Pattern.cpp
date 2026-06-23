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
        vector<vector<int>> a(n);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int x;
                cin >> x;
                a[i].push_back(x);
            }
        }
        int st_row = 0;
        int en_row = n - 1;
        bool found = false;
        while (st_row < en_row)
        {
            int st_col = 0;
            int en_col = n - 1;
            while (st_col < n && en_col >= 0)
            {
                int first = a[st_row][st_col];
                int second = a[en_row][en_col];
                if (first != second)
                {
                    k--;
                }

                if (k < 0)
                {
                    found = true;
                    break;
                }
                st_col++;
                en_col--;
            }
            st_row++;
            en_row--;
            if (found == true)
                break;
        }

        if (found == true)
        {
            cout << "NO" << '\n';
            continue;
        }

        if ((n & 1) != 0)
        {
            int st_col = 0;
            int en_col = n - 1;
            while (st_col < en_col)
            {
                if (a[st_row][st_col] != a[en_row][en_col])
                    k--;
                st_col++;
                en_col--;
            }
        }

        if (k < 0)
            cout << "NO" << '\n';
        else if ((k & 1) == 0 || n % 2 == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}