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
        int count_one = 0;
        int count_zero = 0;
        for (char ch : s)
        {
            if (ch == '1')
                count_one++;
            else
                count_zero++;
        }
        int st = 0;
        int en = st + 2;
        int temp = 0;
        while (en < n)
        {
            if (s[st] == '1' && s[en] == '1' && s[st + 1] == '0')
            {
                s[st + 1] = '1';
                temp++;
            }
            st++;
            en++;
        }
        st = 0;
        en = st + 2;
        int remp = 0;
        while (en < n)
        {
            if (s[st] == '1' && s[en] == '1' && s[st + 1] == '1')
            {
                remp++;
                s[st + 1] = '0';
            }
            st++;
            en++;
        }
        cout << (count_one + temp - remp) << " " << (count_one + temp) << '\n';
    }
}