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

        string s;
        cin >> s;

        int ans = 0;

        int one = 0;
        int three = 0;

        for (char ch : s)
        {

            if (ch == '1')
            {
                one++;
            }

            else if (ch == '3')
            {
                three++;
            }

            else if (ch == '4')
            {
                ans++;
            }

            else if (ch == '2')
            {

                if (one > 0 || three > 0)
                {
                    ans++;
                }
            }
        }

        cout << ans << '\n';
    }
}