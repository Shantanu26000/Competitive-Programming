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
        if (a[0] == a[n - 1])
        {
            cout << "NO" << '\n';
            continue;
        }
        int idx = 1;
        int largest = a[0];
        for (int i = 1; i < n; i++)
        {
            if (a[i] == largest)
                continue;
            else
            {
                idx = i;
                break;
            }
        }
        cout << "YES" << '\n';
        if (idx == 1)
        {
            for (int x : a)
                cout << x << ' ';
            cout << '\n';
        }
        else
        {
            swap(a[0], a[idx]);
            for (int x : a)
                cout << x << ' ';
            cout << '\n';
        }
    }
}