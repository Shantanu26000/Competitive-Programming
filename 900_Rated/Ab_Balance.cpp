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
        int k = s.size();
        if (s[0] == s[k - 1])
        {
        }
        else
        {
            if (s[0] == 'a')
                s[0] = 'b';
            else
                s[0] = 'a';
        }
        cout << s << '\n';
    }
}