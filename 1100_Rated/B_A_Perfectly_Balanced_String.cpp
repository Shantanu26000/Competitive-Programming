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
        set<char> st;
        int j;
        for (j = 0; j < n; j++)
        {
            if (st.find(s[j]) == st.end())
            {
                st.insert(s[j]);
            }
            else
            {
                break;
            }
        }
        bool found = false;
        for (int i = j; i < n; i++)
        {
            if (s[i] != s[i - j])
            {
                found = true;
                break;
            }
        }
        if (found == true)
            cout << "NO" << '\n';
        else
        {
            cout << "YES" << '\n';
        }
    }
}