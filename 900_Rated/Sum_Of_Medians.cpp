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
        int n, k;
        cin >> n >> k;
        vector<long long> a(n * k);
        for (int i = 0; i < n * k; i++)
        {
            cin >> a[i];
        }
        // long long curr = 0;
        // if (n == 2)
        // {
        //     for (int i = 0; i < n * k; i += 2)
        //     {
        //         curr += a[i];
        //     }
        //     cout << curr << '\n';
        //     continue;
        // }
        // else if (n == 1)
        // {
        //     for (int i = 0; i < n * k; i++)
        //     {
        //         curr += a[i];
        //     }
        //     cout << curr << '\n';
        //     continue;
        // }
        int index = n * k - ((n / 2) + 1);
        long long ans = 0;
        int temp = k;
        while (k--)
        {
            ans += a[index];
            index -= ((n / 2) + 1);
        }
        cout << ans << '\n';
    }
}