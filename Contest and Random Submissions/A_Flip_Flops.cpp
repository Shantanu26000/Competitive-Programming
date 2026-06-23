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
        long long c, k;
        cin >> n >> c >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        if (a[0] > c)
            cout << c << '\n';
        else
        {
            bool check_not_lastelement = true;
            int i = 0;
            while (i < n)
            {
                int diff = c - a[i];
                if (diff < 0)
                {
                    break;
                }
                if (diff > k)
                {
                    c += a[i] + k;
                    k = 0;
                    i++;
                    break;
                }
                else
                {
                    c += c;
                    k -= diff;
                    i++;
                }
            }
            while (i < n && c >= a[i])
            {
                c += a[i];
                i++;
            }
            cout << c << '\n';
        }
    }
}