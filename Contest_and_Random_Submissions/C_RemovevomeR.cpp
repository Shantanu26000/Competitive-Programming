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
        int one = 0;
        int zero = 0;
        for (auto ch : s)
        {
            if (ch == '1')
                one++;
            else
                zero++;
        }
        if (one == n || zero == n)
        {
            cout << 1 << '\n';
            continue;
        }
        int i = 0;
        int one_after = -1;
        int zero_after = -1;
        while (i < n)
        {
            if (s[0] == '1')
            {
                i++;
                while (s[i] != '0')
                {
                    i++;
                }
                one_after = i;
                break;
            }
            else
            {
                i++;
                while (s[i] != '1')
                {
                    i++;
                }
                zero_after = i;
                break;
            }
        }
        bool found = false;
        if (one_after == -1)
        {
            for (int i = zero_after; i < n; i++)
            {
                if (s[i] == '0')
                {
                    found = true;
                    break;
                }
            }
        }
        else
        {
            for (int i = one_after; i < n; i++)
            {
                if (s[i] == '1')
                {
                    found = true;
                    break;
                }
            }
        }

        if (found == true)
            cout << 1 << '\n';
        else
            cout << 2 << '\n';
    }
}