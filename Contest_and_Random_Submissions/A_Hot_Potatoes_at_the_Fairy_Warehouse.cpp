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
        n *= 2;
        int red = 0;
        int blue = 0;
        for (int i = 0; i < n; i++)
        {
            int next = (i + 1) % n;
            if (s[i] == '1' && s[next] == '0')
            {
                if ((i % 2) == 0)
                    red++;
                else
                    blue++;
            }
            else if (s[i] == '1' && s[next] == '1')
            {
                if ((i % 2) == 0)
                    blue++;
                else
                    red++;
            }
        }
        cout << red << " " << blue << '\n';
    }
}