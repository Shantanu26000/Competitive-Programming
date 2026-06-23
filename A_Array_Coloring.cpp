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
        int even_count = 0;
        int odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & 1) == 0)
                even_count++;
            else
                odd_count++;
        }
        if (n == 2 && even_count == 1 && odd_count == 1)
            cout << "NO" << '\n';
        else
        {
            if ((odd_count & 1) == 0)
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    }
}