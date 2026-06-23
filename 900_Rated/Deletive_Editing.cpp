#include <bits/stdc++.h>
using namespace std;
int FFO(string &s, int now, char ch)
{
    int k = s.size();
    int ans = 0;
    for (int i = now + 1; i < k; i++)
    {
        if (s[i] == ch)
            ans = i;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
    {
        string s, t;
        cin >> s >> t;
        int a = s.size();
        int b = t.size();
        vector<int> freq(26, 0);
        for (int i = 0; i < b; i++)
        {
            freq[t[i] - 'A']++;
        }
        for (int i = a - 1; i >= 0; i--)
        {
            if (freq[s[i] - 'A'] > 0)
                freq[s[i] - 'A']--;
            else
                s[i] = '.';
        }
        string ans = "";
        for (int i = 0; i < a; i++)
        {
            if (s[i] != '.')
                ans.push_back(s[i]);
        }
        if (ans == t)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}