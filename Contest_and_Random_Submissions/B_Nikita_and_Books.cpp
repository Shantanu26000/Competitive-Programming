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
            cin >> a[i];
        bool found = true;
        for (int i = 0; i < n - 1; i++)
        {
            long long diff = a[i] - (i + 1);
            if (diff < 0)
            {
                found = false;
                break;
            }
            else
            {
                a[i] = a[i] - diff;
                a[i + 1] += diff;
            }
        }
        if (found == true && (n == 1 || a[n - 1] > a[n - 2]))
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}