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
//         long long a, b;
//         cin >> a >> b;
//         if (a == b)
//         {
//             cout << 0 << '\n';
//             continue;
//         }
//         else
//         {
//             long long ans = 0;
//             if (a > b)
//             {
//                 if ((a & 1) != 0)
//                     cout << -1 << '\n';
//                 else
//                 {
//                     long long temp = 0;
//                     while (a != b && a > 0)
//                     {
//                         a /= 2;
//                         temp++;
//                     }
//                     if (a != b)
//                         cout << -1 << '\n';
//                     else
//                     {
//                         ans = temp / 3 + (temp % 3) / 2 + (temp % 3) % 2;
//                         cout << ans << '\n';
//                     }
//                 }
//             }
//             else
//             {
//                 if ((b & 1) != 0)
//                     cout << -1 << '\n';
//                 else
//                 {
//                     long long temp = 0;
//                     while (a != b && a <= LLONG_MAX/2 && a<b)
//                     {
//                         a *= 2;
//                         temp++;
//                     }
//                     if (a != b)
//                         cout << -1 << '\n';
//                     else
//                     {
//                         ans = temp / 3 + (temp % 3) / 2 + (temp % 3) % 2;
//                         cout << ans << '\n';
//                     }
//                 }
//             }
//         }
//     }
// }







#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        if (a == b) {
            cout << 0 << '\n';
            continue;
        }

        // Always make a <= b
        if (a > b) swap(a, b);

        // Step 1: must be divisible
        if (b % a != 0) {
            cout << -1 << '\n';
            continue;
        }

        long long k = b / a;

        // Step 2: k must be power of 2
        if ((k & (k - 1)) != 0) {
            cout << -1 << '\n';
            continue;
        }

        // Step 3: count number of times multiply by 2
        int temp = 0;
        while (k > 1) {
            k /= 2;
            temp++;
        }

        // Step 4: minimize operations using 8,4,2
        long long ans = temp / 3 + (temp % 3) / 2 + (temp % 3) % 2;

        cout << ans << '\n';
    }
}