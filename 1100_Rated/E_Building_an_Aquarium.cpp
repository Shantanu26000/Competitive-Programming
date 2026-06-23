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
        long long x;
        cin >> x;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        long long start = 0;
        long long end = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            end += a[n - 1] - a[i];
            sum += a[i];
        }
        if (x == end)
            cout << a[n - 1] << '\n';
        else if (x < end)
        {
            long long low = a[0], high = a[n - 1], ans = 0;

            while (low <= high)
            {
                long long mid = (low + high) / 2;
                long long temp = 0;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] < mid)
                    {
                        temp += mid - a[i];
                    }
                    else
                    {
                        break;
                    }
                }
                if (temp <= x)
                {

                    ans = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            cout << ans << '\n';
        }
        else
        {
            long long ans = (x + sum) / n;
            cout << ans << '\n';
        }
    }
}