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
        if (even_count == n || odd_count == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << '\n';
        }
        else
        {
            sort(a.begin(), a.end());
            for (int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            cout << '\n';
        }
    }
}