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
        int even_sum = 0;
        int odd_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & 1) == 0)
                even_sum += a[i];
            else
                odd_sum += a[i];
        }
        if (even_sum > odd_sum)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}