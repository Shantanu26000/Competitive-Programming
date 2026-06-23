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
        for (int i = 0; i < n; i++)
        {
            int se = i + k;
            if (se < n)
            {
                if ((s[i] == '1' && s[se] == '1') || (s[i] == '0' && s[se] == '0'))
                {
                    s[i] = '0';
                    s[se] = '0';
                }
                else if (s[i] == '1' && s[se] == '0')
                {
                    s[i] = '0';
                    s[se] = '1';
                }
                else
                {
                }
            }
            else
            {
                break;
            }
        }

        bool again = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                again = true;
                break;
            }
        }
        if (again == true)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}