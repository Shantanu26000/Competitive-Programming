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
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans;

        if (a[0] > x)
        {
            ans = 2 * x;
            cout << ans << '\n';
        }
        else if (a[0] == x)
        {
            ans = x;
            cout << ans << '\n';
        }
        else
        {
            ans = a[0];
            int temp = a[0];
            int i;
            for (i = 1; i < n && a[i] <= x; i++)
            {
                temp = a[i] - a[i - 1];
                ans = max(ans, temp);
            }

            if (i < n)
                ans = max(ans, (x - a[i - 1]) * 2);
            else
                ans = max(ans, (x - a[n - 1]) * 2);

            cout << ans << '\n';
        }
    }
}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, x;
//         cin >> n >> x;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         int ans;

//         ans = a[0];
//         int temp = a[0];
//         int i;
//         for (i = 1; i < n && a[i] <= x; i++)
//         {
//             temp = a[i] - a[i - 1];
//             ans = max(ans, temp);
//         }

//         // FIX: always use last station
//         ans = max(ans, (x - a[n - 1]) * 2);

//         cout << ans << '\n';
//     }
// }