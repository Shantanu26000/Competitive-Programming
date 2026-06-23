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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> diff(n - 1);
        int ans = 0;
        bool neg_found = false;
        for (int i = 1; i < n; i++)
        {
            diff[i - 1] = a[i] - a[i - 1];
            if (diff[i - 1] < 0)
            {
                neg_found = true;
                break;
            }
        }
        if (neg_found == true)
        {
            cout << 0 << '\n';
            continue;
        }
        else
        {
            sort(diff.begin(), diff.end());
            cout << (diff[0] / 2) + 1 << '\n';
        }
    }
}