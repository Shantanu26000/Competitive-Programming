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
        int n, w;
        cin >> n >> w;
        if (w == 1)
        {
            cout << 0 << '\n';
            continue;
        }
        int first = n / w;
        int second = n % w;
        int ans = ((first * w) - first) + second;
        cout << ans << '\n';
    }
}