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
//         long long k, x;
//         cin >> k >> x;
//         long long temp1 = (1LL << k);
//         long long temp2 = (1LL << k);
//         long long needed2 = x;
//         long long needed1 = temp1 * 2 - x;
//         bool found = false;
//         int count = 0;
//         bool vanila_to_chocola = false;
//         if (temp1 == needed1 || temp1 == needed2)
//         {
//             cout << 0 << '\n';
//             cout << '\n';
//             continue;
//         }
//         while (found == false)
//         {
//             if (temp1 / 2 == needed1)
//             {
//                 found = true;
//                 vanila_to_chocola = true;
//                 break;
//             }
//             else if(temp1/2==needed2){
//                 found = true;
//                 break;
//             }
//             else if(temp2/2 == needed2 || temp2/2==needed1){
//                 found = true;  
//                 break;
//             }

//             if (temp2 == 1)
//                 break;
//             if ((temp2 & 1) == 0)
//                 temp1 += (temp2 / 2);
//             if ((temp2 & 1) == 0)
//                 temp2 -= (temp2 / 2);
//             count++;
//         }
//         vector<int> ans;
//         if (vanila_to_chocola == true)
//         {
//             ans.insert(ans.end(), count, 1);
//             ans.push_back(2);
//         }
//         else
//         {
//             ans.insert(ans.end(), count, 1);
//             ans.push_back(1);
//         }
//         cout << ans.size() << '\n';
//         for (int x : ans)
//             cout << x << " ";
//         cout << '\n';
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

        long long k, x;
        cin >> k >> x;

        long long start = (1LL << k);
        long long total = (1LL << (k + 1));

        vector<int> ans;

        // Work backwards
        while (x != start) {

            // Last operation was type 1
            if (x < start) {

                ans.push_back(1);
                x *= 2;
            }

            // Last operation was type 2
            else {

                ans.push_back(2);
                x = 2 * x - total;
            }
        }

        reverse(ans.begin(), ans.end());

        cout << ans.size() << '\n';

        for (int v : ans)
            cout << v << " ";

        cout << '\n';
    }

    return 0;
}