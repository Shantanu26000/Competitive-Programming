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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long unique = a[0];
        vector<long long> ans(n);
        for (int i = 0; i < n; i++)
            ans[i] = i + 1;
        if (a[0] != a[1])
        {
            cout << -1 << '\n';
        }
        else
        {
            bool found = false;
            int count = 0;
            for (int i = 1; i < n; i++)
            {

                if (unique == a[i])
                {
                    swap(ans[i], ans[i - 1]);
                    count++;
                }
                else
                {
                    if (count > 0)
                    {
                        unique = a[i];
                        count = 0;
                    }
                    else
                    {
                        found = true;
                        break;
                    }
                }
            }
            if (found == true)
            {
                cout << -1 << '\n';
            }
            else
            {
                if (a[n - 1] != a[n - 2])
                    cout << -1 << '\n';
                else
                {
                    for (long long it : ans)
                    {
                        cout << it << " ";
                    }
                    cout << '\n';
                }
            }
        }
    }
}