// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         unordered_map<int, int> mp;
//         vector<vector<int>> a(n, vector<int>(n));
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cin >> a[i][j];
//                 mp[a[i][j]]++;
//             }
//         }
//         int maxi = INT_MIN;
//         for (auto x : mp)
//         {
//             maxi = max(maxi, x.second);
//         }

//         if (n == 1)
//         {
//             cout << "NO" << '\n';
//             continue;
//         }

//         if (((n * n) & 1) == 0)
//         {
//             if (maxi > ((n * n) / 2))
//                 cout << "NO" << '\n';
//             else
//                 cout << "YES" << '\n';
//         }
//         else
//         {
//             if (maxi > ((n * n) / 2) + 1)
//                 cout << "NO" << '\n';
//             else
//                 cout << "YES" << '\n';
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
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int x;
                cin >> x;
                freq[x]++;
            }
        }

        bool ok = true;

        for (auto it : freq) {
            if (it.second > n * (n - 1)) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}