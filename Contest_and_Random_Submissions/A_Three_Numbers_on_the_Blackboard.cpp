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
        int a, b, c;
        cin >> a >> b >> c;
        int maxi = max({a, b, c});
        int mini = min({a, b, c});
        int middle = -1;
        if ((a == maxi || b == maxi) && (b == mini || a == mini))
            middle = c;
        else if ((a == maxi || c == maxi) && (a == mini || c == mini))
            middle = b;
        else
            middle = a;
        cout << min((maxi - mini), middle) << '\n';
    }
}