#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, d;
        cin >> n >> m >> d;
        if (m > d)
        {
            cout << n << '\n';
            continue;
        }
        int factor = 0;
        int weight = 0;
        int boxes = n;
        while (boxes > 0 && weight <= d)
        {
            weight += m;
            factor++;
            boxes--;
        }
        if ((n % factor) == 0)
            cout << n / factor << '\n';
        else
            cout << n / factor + 1 << '\n';
    }
}