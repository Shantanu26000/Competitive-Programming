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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int moves = d - b;
        if (moves < 0)
        {
            cout << -1 << '\n';
            continue;
        }
        int new_c = a + moves;
        if (new_c < c)
        {
            cout << -1 << '\n';
        }
        else
        {
            moves += new_c - c;
            cout << moves << '\n';
        }
    }
}