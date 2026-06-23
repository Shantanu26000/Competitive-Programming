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
        int n, x_1, x_2, k;
        cin >> n >> x_1 >> x_2 >> k;
        if (n == 2 || n == 3)
        {
            cout << 1 << '\n';
        }
        else if (abs(x_1 - x_2) == 1 || (x_1 == 1 && x_2 == n) || (x_1 == n && x_2 == 1))
        {
            cout << k + 1 << '\n';
        }
        else
        {
            int op1 = abs(x_1 - x_2) - 1 + (k + 1);
            int op2 = 0;
            if (x_1 > x_2)
            {
                op2 = x_2 - x_1 + n - 1 + k + 1;
            }
            else
            {
                op2 = x_1 - x_2 + n - 1 + k + 1;
            }
            cout << min(op1, op2) << '\n';
        }
    }
}