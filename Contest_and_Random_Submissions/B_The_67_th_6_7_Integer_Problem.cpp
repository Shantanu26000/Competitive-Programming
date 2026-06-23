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
        vector<int> a(7);
        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] > maxi)
                maxi = a[i];
        }
        cout << ((-1) * sum) + 2 * maxi << '\n';
    }
}