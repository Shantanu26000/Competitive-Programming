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
        long long n;
        cin >> n;
        int count_2 = 0;
        int count_3 = 0;
        while (n > 0 && n % 2 == 0)
        {
            count_2++;
            n /= 2;
        }
        while (n > 0 && n % 3 == 0)
        {
            count_3++;
            n /= 3;
        }
        if (n > 1 || count_2 > count_3)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << count_3 - count_2 + count_3 << '\n';
        }
    }
}