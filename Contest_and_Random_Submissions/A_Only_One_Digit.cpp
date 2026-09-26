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
        int x;
        cin >> x;
        int result = 10;
        while (x > 0)
        {
            int temp = x % 10;
                result = min(result, temp);
            x /= 10;
        }
        cout << result << '\n';
    }
}