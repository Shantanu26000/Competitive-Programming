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
        int n, a, b;
        cin >> n >> a >> b;
        if (a == n && b == n)
        {
            cout << "Yes" << '\n';
            continue;
        }

        int diff = n - (a + b);
        if (diff <= 1)
        {
            cout << "No" << '\n';
        }
        else
        {
            cout << "Yes" << '\n';
        }
    }
}