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
        int n = s.size();
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                count0++;
            else
                count1++;
        }
        int ans = 0;
        bool found = false;
        int i = 0;
        while (i < n)
        {
            if (s[i] == '1')
            {
                if (count0 > 0)
                {
                    count0--;
                    i++;
                }
                else
                {
                    found = true;
                    break;
                }
            }
            else
            {
                if (count1 > 0)
                {
                    count1--;
                    i++;
                }
                else
                {
                    found = true;
                    break;
                }
            }
        }
        if (found = false)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << n - i << '\n';
        }
    }
}