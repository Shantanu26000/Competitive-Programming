#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        int neg_count = 0;
        int zero_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
                neg_count++;
            if (a[i] == 0)
                zero_count++;
            sum += abs(a[i]);
        }
        sort(a.begin(), a.end());
        if (neg_count == 0 || (neg_count & 1) == 0)
            cout << sum << '\n';
        else
        {
            if (zero_count > 0)
                cout << sum << '\n';
            else
            {
                long long temp = sum;
                int idx = -1;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] > 0)
                    {
                        idx = i;
                        break;
                    }
                }
                if (idx == -1)
                {
                    sum += 2 * a[n - 1];
                    cout << sum << '\n';
                }

                else
                {
                    sum -= 2 * a[idx];
                    temp += 2 * a[idx - 1];
                    cout << max(sum, temp) << '\n';
                }
            }
        }
    }
}