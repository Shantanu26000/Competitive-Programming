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
        int neg_count = 0;
        int pos_count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
            {
                neg_count++;
            }
            else
            {
                pos_count++;
            }
            sum += a[i];
        }

        if (sum >= 0)
        {
            if ((neg_count & 1) != 0)
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else
        {
            int ans = 0;
            if (abs(sum) % 2 == 0)
            {
                ans = (abs(sum) / 2);
            }
            else
            {
                ans = (abs(sum) / 2) + 1;
            }

            neg_count -= ans;
            pos_count += ans;
            if ((neg_count & 1) != 0)
                cout << ans + 1 << '\n';
            else
                cout << ans << '\n';
        }
    }
}