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
//         int n;
//         cin >> n;
//         vector<int> a(n), b(n), c(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         for (int i = 0; i < n; i++)
//             cin >> b[i];
//         for (int i = 0; i < n; i++)
//             cin >> c[i];
//         /// Case 1  1->2->3;
//         long long maxi = *max_element(a.begin(), a.end());
//         int idx = max_element(a.begin(), a.end()) - a.begin();
//         long long result = INT_MIN;
//         long long temp = b[0];
//         int se_idx = 0;
//         if (idx == 0)
//         {
//             temp = b[1];
//             se_idx = 1;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx)
//                 continue;
//             if (b[i] > temp)
//             {
//                 temp = b[i];
//                 se_idx = i;
//             }
//         }
//         maxi += temp;
//         temp = c[0];
//         int c_idx = 0;
//         if (se_idx == 0 && idx == 1)
//         {
//             temp = c[2];
//             c_idx = 2;
//         }

//         else if (idx == 0)
//         {
//             temp = c[1];
//             c_idx = 1;
//         }

//         else if (se_idx == 0)
//         {
//             temp = c[1];
//             c_idx = 1;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx || i == se_idx)
//                 continue;
//             if (c[i] > temp)
//             {
//                 temp = c[i];
//                 c_idx = i;
//             }
//         }
//         maxi += temp;
//         result = max(result, maxi);

//         // Case 2  1->3->2

//         maxi = *max_element(a.begin(), a.end());
//         idx = max_element(a.begin(), a.end()) - a.begin();
//         temp = c[0];
//         se_idx = 0;
//         if (idx == 0)
//         {
//             temp = c[1];
//             se_idx = 1;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx)
//                 continue;
//             if (c[i] > temp)
//             {
//                 temp = c[i];
//                 se_idx = i;
//             }
//         }
//         maxi += temp;
//         temp = b[0];
//         c_idx = 0;
//         if (se_idx == 0 && idx == 1)
//         {
//             temp = b[2];
//             c_idx = 2;
//         }

//         else if (idx == 0)
//         {
//             temp = b[1];
//             c_idx = 1;
//         }

//         else if (se_idx == 0)
//         {
//             temp = b[1];
//             c_idx = 1;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx || i == se_idx)
//                 continue;
//             if (b[i] > temp)
//             {
//                 temp = b[i];
//                 c_idx = i;
//             }
//         }
//         maxi += temp;
//         result = max(result, maxi);

//         /// Case 3  2->1->3

//         maxi = *max_element(b.begin(), b.end());
//         idx = max_element(b.begin(), b.end()) - b.begin();
//         temp = a[0];
//         se_idx = 0;
//         if (idx == 0)
//         {
//             temp = a[1];
//             se_idx = 1;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx)
//                 continue;
//             if (a[i] > temp)
//             {
//                 temp = a[i];
//                 se_idx = i;
//             }
//         }
//         maxi += temp;
//         temp = c[0];
//         c_idx = 0;
//         if (se_idx == 0 && idx == 1)
//         {
//             temp = c[2];
//             c_idx = 2;
//         }

//         else if (idx == 0)
//         {
//             temp = c[1];
//             c_idx = 1;
//         }

//         else if (se_idx == 0)
//         {
//             temp = c[1];
//             c_idx = 1;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx || i == se_idx)
//                 continue;
//             if (c[i] > temp)
//             {
//                 temp = c[i];
//                 c_idx = i;
//             }
//         }
//         maxi += temp;
//         result = max(result, maxi);

//         /// Case 4  2->3->1

//         maxi = *max_element(b.begin(), b.end());
//         idx = max_element(b.begin(), b.end()) - b.begin();
//         temp = c[0];
//         se_idx = 0;
//         if (idx == 0)
//         {
//             temp = c[1];
//             se_idx = 1;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx)
//                 continue;
//             if (c[i] > temp)
//             {
//                 temp = c[i];
//                 se_idx = i;
//             }
//         }
//         maxi += temp;
//         temp = a[0];
//         c_idx = 0;
//         if (se_idx == 0 && idx == 1)
//         {
//             temp = a[2];
//             c_idx = 2;
//         }

//         else if (idx == 0)
//         {
//             temp = a[1];
//             c_idx = 1;
//         }

//         else if (se_idx == 0)
//         {
//             temp = a[1];
//             c_idx = 1;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx || i == se_idx)
//                 continue;
//             if (a[i] > temp)
//             {
//                 temp = a[i];
//                 c_idx = i;
//             }
//         }
//         maxi += temp;
//         result = max(result, maxi);

//         // Case 5  3->1->2

//         maxi = *max_element(c.begin(), c.end());
//         idx = max_element(c.begin(), c.end()) - c.begin();
//         temp = a[0];
//         se_idx = 0;
//         if (idx == 0)
//         {
//             temp = a[1];
//             se_idx = 1;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx)
//                 continue;
//             if (a[i] > temp)
//             {
//                 temp = a[i];
//                 se_idx = i;
//             }
//         }
//         maxi += temp;
//         temp = b[0];
//         c_idx = 0;
//         if (se_idx == 0 && idx == 1)
//         {
//             temp = b[2];
//             c_idx = 2;
//         }

//         else if (idx == 0)
//         {
//             temp = b[1];
//             c_idx = 1;
//         }

//         else if (se_idx == 0)
//         {
//             temp = b[1];
//             c_idx = 1;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx || i == se_idx)
//                 continue;
//             if (b[i] > temp)
//             {
//                 temp = b[i];
//                 c_idx = i;
//             }
//         }
//         maxi += temp;
//         result = max(result, maxi);

//         /// Case 6  3->2->1

//         maxi = *max_element(c.begin(), c.end());
//         idx = max_element(c.begin(), c.end()) - c.begin();
//         temp = b[0];
//         se_idx = 0;
//         if (idx == 0)
//         {
//             temp = b[1];
//             se_idx = 1;
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx)
//                 continue;
//             if (b[i] > temp)
//             {
//                 temp = b[i];
//                 se_idx = i;
//             }
//         }
//         maxi += temp;
//         temp = a[0];
//         c_idx = 0;
//         if (se_idx == 0 && idx == 1)
//         {
//             temp = a[2];
//             c_idx = 2;
//         }

//         else if (idx == 0)
//         {
//             temp = a[1];
//             c_idx = 1;
//         }

//         else if (se_idx == 0)
//         {
//             temp = a[1];
//             c_idx = 1;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             if (i == idx || i == se_idx)
//                 continue;
//             if (a[i] > temp)
//             {
//                 temp = a[i];
//                 c_idx = i;
//             }
//         }
//         maxi += temp;
//         result = max(result, maxi);

//         cout << result << '\n';
//     }
// }

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
        vector<int> a(n), b(n), c(n);
        vector<pair<int, int>> ai(n), bi(n), ci(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ai[i].first = a[i];
            ai[i].second = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            bi[i].first = b[i];
            bi[i].second = i;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            ci[i].first = c[i];
            ci[i].second = i;
        }
        sort(ai.rbegin(), ai.rend());
        sort(bi.rbegin(), bi.rend());
        sort(ci.rbegin(), ci.rend());
        vector<pair<int, int>> topA(3), topB(3), topC(3);
        topA[0].first = ai[0].first;
        topA[0].second = ai[0].second;
        topA[1].first = ai[1].first;
        topA[1].second = ai[1].second;
        topA[2].first = ai[2].first;
        topA[2].second = ai[2].second;
        topB[0].first = bi[0].first;
        topB[0].second = bi[0].second;
        topB[1].first = bi[1].first;
        topB[1].second = bi[1].second;
        topB[2].first = bi[2].first;
        topB[2].second = bi[2].second;
        topC[0].first = ci[0].first;
        topC[0].second = ci[0].second;
        topC[1].first = ci[1].first;
        topC[1].second = ci[1].second;
        topC[2].first = ci[2].first;
        topC[2].second = ci[2].second;
        int ans = INT_MIN;
        for (auto it : topA)
        {
            for (auto iti : topB)
            {
                for (auto itj : topC)
                {
                    if (it.second != iti.second && it.second != itj.second && iti.second != itj.second)
                    {
                        ans = max(ans, (it.first + iti.first + itj.first));
                    }
                }
            }
        }
        cout << ans << '\n';
    }
}