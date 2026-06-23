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
        int x, y;
        cin >> x >> y;
        x = x & 1;
        y = y & 1;
        if ((x + y) < 2)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}