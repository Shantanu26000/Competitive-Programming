#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, x;
        cin >> n >> s >> x;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        s -= sum;
        if (s < 0)
            cout << "NO" << '\n';
        else if ((s % x) == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}