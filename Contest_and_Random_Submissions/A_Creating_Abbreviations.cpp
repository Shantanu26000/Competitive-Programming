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
        int n, m;
        cin >> n >> m;

        unordered_map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            mp[toupper(s[0])]++;
        }

        bool found = true;

        for (int i = 0; i < m; i++)
        {
            string s;
            cin >> s;

            for (int j = 0; j < s.size(); j++)
            {
                if (mp.find(s[j]) == mp.end())
                {
                    found = false;
                    break;
                }
            }
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}