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
        vector<int> a(n), b(n);
        vector<long long>prefix_a(n), prefix_b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        prefix_a[0] = 1LL*a[0];
        prefix_b[0] = 1LL*b[0];
        for (int i = 1; i < n; i++)
        {
            prefix_a[i] = prefix_a[i - 1] + a[i];
            prefix_b[i] = prefix_b[i - 1] + b[i];
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (prefix_a[i] > prefix_b[i])
            {
                found = true;
                break;
            }
        }
        if (found == true)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}