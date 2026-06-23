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
        unordered_map<char, int> mp;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(s[i]) == mp.end())
            {
                mp[s[i]] = i;
            }
            else
            {
                if (((i - mp[s[i]]) & 1) == 0)
                    mp[s[i]] = i;
                else
                {
                    found = true;
                    break;
                }
            }
        }
        if (found == true)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}