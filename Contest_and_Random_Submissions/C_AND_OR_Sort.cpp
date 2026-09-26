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
        string s;
        cin >> s;
        int ones = 0;
        int zeros = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeros++;
        }
        if (s[0] == '1')
        {
            cout << zeros << '\n';
            continue;
        }
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            ones += (s[i] == '1');
            zeros -= (s[i] == '0');
            ans = min(ans, ones + zeros);
        }
        cout << ans << '\n';
    }
}