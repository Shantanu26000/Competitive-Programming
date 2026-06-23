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

        vector<int> p(n), a(n);

        for (int i = 0; i < n; i++)
            cin >> p[i];

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || a[i] != a[i - 1])
                b.push_back(a[i]);
        }

        int j = 0;

        for (int i = 0; i < n && j < (int)b.size(); i++)
        {
            if (p[i] == b[j])
                j++;
        }

        if (j == (int)b.size())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}