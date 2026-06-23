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
        int count = 0;
        int temp = 1;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                count++;
                for (int j = i + 1; j < n; j++)
                {
                    if (temp == 3)
                    {
                        found = true;
                        break;
                    }
                    if (s[j] == '.')
                    {
                        temp++;
                    }
                    else
                    {
                        temp = 1;
                        break;
                    }
                }
                if (found == true)
                    break;
            }
        }
        if (found == true)
            cout << 2 << '\n';
        else
            cout << count << '\n';
    }
}