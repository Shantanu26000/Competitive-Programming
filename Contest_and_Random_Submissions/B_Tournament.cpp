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
        int n, j, k;
        cin >> n >> j >> k;

        vector<int> a(n);
        for (int &x : a)
            cin >> x;

        if (k > 1)
        {
            cout << "YES\n";
        }
        else
        {
            int mx = *max_element(a.begin(), a.end());

            if (a[j - 1] == mx)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}
