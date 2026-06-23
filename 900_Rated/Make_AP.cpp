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
        long long a, b, c;
        cin >> a >> b >> c;
        long long f = 2 * b;
        long long s = a + c;
        if (f == s)
        {
            cout << "Yes" << '\n';
        }
        else if (f > s)
        {
            if (f - a > c && ((f - a) % c) == 0)
            {
                cout << "Yes" << '\n';
                continue;
            }
            if (f - a < c && (c % (f - a)) == 0)
            {
                cout << "Yes" << '\n';
                continue;
            }
            if (f - c > a && ((f - c) % a) == 0)
            {
                cout << "Yes" << '\n';
                continue;
            }
            if (f - c < a && (a % (f - c)) == 0)
            {
                cout << "Yes" << '\n';
                continue;
            }
            else
            {
                cout << "No" << '\n';
            }
        }
        else
        {
            long long found = s % f;
            if (found == 0)
                cout << "Yes" << '\n';
            else
                cout << "No" << '\n';
        }
    }
}