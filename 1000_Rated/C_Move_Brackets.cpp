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
        for (char c : s)
        {
            if (c == '(')
            {
                open_count++;
            }
            else
            {
                if (open_count == 0)
                    close_count++;
                else
                    open_count--;
            }
        }
        cout << close_count << '\n';
    }
}