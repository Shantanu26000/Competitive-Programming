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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.rbegin(), a.rend());
        bool found = false;
        int i = 0;
        while (i < n - 1)
        {
            int temp = a[i] % a[i + 1];
            i++;
            if (i + 1 < n)
            {
                if (temp != a[i + 1])
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
            cout << a[0] << " " << a[1] << '\n';
        }
    }
}