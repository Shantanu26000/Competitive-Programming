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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int maxi = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] - a[i] < 0)
            {
            }

            else
                maxi = max((a[i - 1] - a[i]), maxi);
        }
        for (int i = 1; i < n; i++)
        {
            if ((a[i - 1] - a[i]) > 0)
                a[i] += maxi;
        }
        bool found = true;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] > a[i])
            {
                found = false;
                break;
            }
        }
        if (found == false)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}