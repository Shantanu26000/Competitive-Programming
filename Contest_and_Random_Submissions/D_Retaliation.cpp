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
        long long den = 1LL * n * n - 1;
        long long numx = n * a[n - 1] - a[0];
        long long numy = n * a[0] - a[n - 1];
        if (numx < 0 || numy < 0 || den == 0 || (numx % den) != 0 || (numy % den) != 0)
        {
            cout << "NO" << '\n';
            continue;
        }
        long long x = numx / den;
        long long y = numy / den;
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != (x * (i + 1) + y * (n - i)))
            {
                possible = false;
                break;
            }
        }
        if (possible == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}