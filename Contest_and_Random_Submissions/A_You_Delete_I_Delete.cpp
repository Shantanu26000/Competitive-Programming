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
        for (int k = 0; k < s.size(); k++)
        {
            if (s[k] == '0')
            {
                s.erase(k, 1);
                break;
            }
        }
        for (int k = 0; k < s.size(); k++)
        {
            if (s[k] == '1' && s.size() != n)
            {
                s.erase(k, 1);
                break;
            }
        }
        for (auto ch : s)
            cout << ch;
        cout << '\n';
    }
}