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
        int open_count = 0;
        int close_count = 0;
        for (char ch : s)
        {
            if (ch == '(')
                open_count++;
            else
                close_count++;
        }
        if (open_count == close_count)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}