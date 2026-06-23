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
        long long x;
        cin >> x;
        vector<long long> a(n);
        long long big = 0;
        long long sum = 0;
        long long small = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % x != 0)
            {
                sum += a[i];
            }
            else
            {
                small += ceil((double)a[i] / x);
            }
            big += ceil((double)a[i] / x);
        }
        small += ceil((double)sum / x);
        cout << small << " " << big << '\n';
    }
}