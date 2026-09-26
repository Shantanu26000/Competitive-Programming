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
        if (a > c || b > d)
        {
            cout << "NO" << '\n';
            continue;
        }
        int second_A = c - a;
        int second_B = d - b;
        if ((min(a, b) * 2 + 2) < max(a, b))
        {
            cout << "NO" << '\n';
        }
        else
        {
            if ((min(second_A, second_B) * 2 + 2) < max(second_A, second_B))
                cout << "NO" << '\n';
            else
                cout << "YES" << '\n';
        }
    }
}