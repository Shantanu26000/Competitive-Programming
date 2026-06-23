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
        long long a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << " " << 0 << '\n';
        }
        else if (abs(a - b) == 1)
        {
            cout << 1 << " " << 0 << '\n';
        }
        else
        {
            long long diff = abs(a - b);
            if (__gcd(a, b) == diff)
            {
                cout << diff << " " << 0 << '\n';
            }
            else
            {
                long long down = a / diff;
                long long ops = min(abs((down * diff) - a), abs(diff * (down + 1) - a));
                cout << diff << " " << ops << '\n';
            }
        }
    }
}