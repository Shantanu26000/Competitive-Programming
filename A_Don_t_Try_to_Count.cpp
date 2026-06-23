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
        string x, s;
        cin >> x;
        cin >> s;
        int op = 0;
        while (x.size() < m)
        {
            x += x;
            op++;
        }
        n = x.size();
        if (x.find(s) != string::npos)
        {
            cout << op << '\n';
        }
        else
        {
            x += x;
            op++;
            if (x.find(s) != string::npos)
            {
                cout << op << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }
}