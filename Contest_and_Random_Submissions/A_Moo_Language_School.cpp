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
            int temp = k;
            bool found = false;
            while (temp > 0)
            {
                if (s[i] == '0')
                {
                    found = true;
                    temp--;
                    break;
                }
                else
                {
                    i++;
                }
                temp--;
            }
            if (found == false)
            {
                ans++;
            }
            else
            {
                i += (temp + 1);
            }
        }
        cout << ans << '\n';
    }
}