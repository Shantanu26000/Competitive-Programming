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
        int one_count = 0;
        int minus_count = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == -1)
                minus_count++;
            else
                one_count++;
        }
        if (abs(one_count - minus_count) % 4 == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}