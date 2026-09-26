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
        bool found = false;
        for (int i = 0; i + 3 < n; i++)
        {
            if (s.substr(i, 4) == "2026")
            {
                found = true;
                break;
            }
        }
        if (found == true)
        {
            cout << "0" << '\n';
            continue;
        }
        bool not_found = true;
        for (int i = 0; i + 3 < n; i++)
        {
            if (s.substr(i, 4) == "2025")
            {
                not_found = false;
                break;
            }
        }

        if (not_found == true)
            cout << "0" << '\n';
        else
            cout << "1" << '\n';
    }
}