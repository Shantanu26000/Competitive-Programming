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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int i = 0;
        int ops = 0;
        bool found = false;
        while (i < n)
        {
            int sum = 0;
            int last_idx_one = -1;
            if (a[i] != b[i])
            {
                sum += a[i];
                if (a[i] == 1)
                    last_idx_one = i;
                i++;
                while (i < n && a[i] != b[i])
                {
                    sum += a[i];
                    if (a[i] == 1)
                        last_idx_one = i;
                    i++;
                }
                if ((sum & 1) == 0)
                {
                    if (last_idx_one == -1)
                    {
                        found = true;
                        break;
                    }
                    else
                    {
                        ops++;
                        i = last_idx_one;
                    }
                }
                else
                {
                    ops++;
                }
            }
            else
            {
                i++;
            }
        }
        if (found == true)
            cout << -1 << '\n';
        else
            cout << ops << '\n';
    }
}