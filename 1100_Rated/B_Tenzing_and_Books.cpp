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
        int x;
        cin >> x;
        vector<int> pre[3]; // This means vector<vector<int>> whose size is 3 means 3 rows
        for (int i = 0; i < 3; i++)
        {
            int s = 0;
            pre[i].push_back(s);
            for (int j = 0; j < n; j++)
            {
                int a;
                cin >> a;
                if ((s | a) != s)
                {
                    s |= a;
                    pre[i].push_back(s);
                }
            }
        }
        bool found = false;
        for (int A : pre[0])
        {
            for (int B : pre[1])
            {
                for (int C : pre[2])
                {
                    if ((A | B | C) == x)
                    {
                        found = true;
                    }
                }
            }
        }
        if (found == true)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}