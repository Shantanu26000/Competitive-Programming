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
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        // first option  without AI
        int op1 = 0;
        if ((n % (x + y)) == 0)
        {
            op1 = (n) / (x + y);
        }
        else
        {
            op1 = (n + x + y) / (x + y);
        }
        ///  second option

        int op2 = z;
        n -= (x * z);
        int speed = x + (10 * y);
        if ((n % speed) == 0)
        {
            op2 += n / speed;
        }
        else
        {
            op2 += (n + speed) / (speed);
        }
        cout << min(op1, op2) << '\n';
    }
}