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
        if ((a & 1) == 0 && (b & 1) == 0)
        {
            cout << (a * (b / 2) + 2) << '\n';
        }
        else if ((a & 1) != 0 && (b & 1) != 0)
        {
            cout << a * b + 1 << '\n';
        }
        else if ((a & 1) != 0 && (b & 1) == 0)
        {
            long long i = 2;
            long long ans = -1;
            while (i <= b)
            {
                if( (b%i)!=0)  break;
                long long temp = a * (b / i) + i;
                if ((temp & 1) == 0)
                {
                    ans = temp;
                    break;
                }
                i *= 2;
            }
            cout << ans << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}