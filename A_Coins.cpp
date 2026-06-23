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
        long long n, k;
        cin >> n >> k;
        if (n % 2 == 0)
        {
            cout << "YES" << '\n';
            continue;
        }
        if (n % k == 0)
        {
            cout << "YES" << '\n';
            continue;
        }
        int temp = k % 2;
        if (temp == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}