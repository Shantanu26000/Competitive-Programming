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
        long long gcd1 = 0;
        long long gcd2 = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i & 1) == 0)
                gcd1 = __gcd(gcd1, a[i]);
            else
                gcd2 = __gcd(gcd2, a[i]);
        }
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if ((a[i] % gcd1) == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << gcd1 << '\n';
            continue;
        }
        flag = true;
        for (int i = 0; i < n; i += 2)
        {
            if ((a[i] % gcd2) == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
            cout << gcd2 << '\n';
        else
        {
            cout << 0 << '\n';
        }
    }
}