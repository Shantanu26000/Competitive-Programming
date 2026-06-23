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
        vector<long long> a(n);
        int count1 = 0;
        int count0 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                count1++;
            if (a[i] == 0)
                count0++;
        }
        if (count0 == 0)
        {
            cout << count1 << '\n';
        }
        else
        {
            long long  p = ((long long)1 << count0);
            cout << (long long)count1 * p << '\n';
        }
    }
}