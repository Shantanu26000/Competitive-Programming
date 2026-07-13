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
        int first = a[0];
        bool found = false;
        for (int i = 1; i < n; i++)
        {
            if (first == a[i])
            {
                found = true;
                break;
            }
            else
            {
                first = a[i];
            }
        }
        if (found == true)
        {
            cout << -1 << '\n';
        }
        else
        {
            for (auto it : a)
                cout << it << " ";
            cout << '\n';
        }
    }
}