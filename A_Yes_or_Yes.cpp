#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count_y = 0;
        bool found = false;
        for (char ch : s)
        {
            if (ch == 'Y')
                count_y++;
            if (count_y > 1)
            {
                found = true;
                break;
            }
        }
        if (found == true)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
}