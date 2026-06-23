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
        long long n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<long long> a_subarray(2 * n + 1, 0);
        vector<long long> b_subarray(2 * n + 1, 0);
        long long counter = 1;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
                counter++;
            else
            {
                a_subarray[a[i - 1]] = max(counter, a_subarray[a[i - 1]]);
                counter = 1;
            }
        }
        a_subarray[a[n - 1]] = max(counter, a_subarray[a[n - 1]]);
        counter = 1;
        for (int i = 1; i < n; i++)
        {
            if (b[i] == b[i - 1])
                counter++;
            else
            {
                b_subarray[b[i - 1]] = max(counter, b_subarray[b[i - 1]]);
                counter = 1;
            }
        }
        b_subarray[b[n - 1]] = max(counter, b_subarray[b[n - 1]]);
        long long maxfrequency = -1;
        for (int i = 1; i <= 2 * n; i++)
        {
            maxfrequency = max(maxfrequency, a_subarray[i] + b_subarray[i]);
        }
        cout << maxfrequency << '\n';
    }
}