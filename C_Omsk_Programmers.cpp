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
        int a, b, x;
        cin >> a >> b >> x;
        int ans = INT_MAX;
        ans = min(ans, abs(a - b));
        int temp = 0;
        while (a != b)
        {
            if (a > b)
            {
                temp++;
                a /= x;
                temp += abs(a - b);
                ans = min(ans, temp);
                temp -= abs(a - b);
            }
            else
            {
                temp++;
                b /= x;
                temp += abs(a - b);
                ans = min(ans, temp);
                temp -= abs(a - b);
            }
        }
        cout << ans << '\n';
    }
}