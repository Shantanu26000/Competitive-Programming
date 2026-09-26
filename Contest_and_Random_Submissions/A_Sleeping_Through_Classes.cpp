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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int i = 0;
        int ans = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                int cnt = k;
                while (cnt > 0)
                {
                    i++;
                    cnt--;
                    if (i < n && s[i] == '1')
                        cnt = k;
                }
                i++;
            }
            else
            {
                ans++;
                i++;
            }
        }
        cout << ans << '\n';
    }
}