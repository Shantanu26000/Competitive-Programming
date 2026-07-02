#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> gap;
        for (int i = 0; i < k - 1; i++)
        {
            gap.push_back(a[i + 1] - a[i] - 1);
        }
        gap.push_back(n - a[k - 1] + a[0] - 1);
        sort(gap.rbegin(), gap.rend());
        int days = 0;
        int safe = 0;
        for (auto gaps : gap)
        {
            int curr_gap = gaps - (2 * days);
            if (curr_gap > 0)
            {
                safe++;
                curr_gap -= 2;
                if (curr_gap > 0)
                    safe += curr_gap;
                days += 2;
            }
        }
        cout << (n - safe) << '\n';
    }
}
