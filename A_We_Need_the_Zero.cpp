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
        int n;
        cin >> n;
        vector<int> a(n);
        int Xor = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            Xor ^= a[i];
        }
        if ((n & 1) != 0)
        {
            cout << Xor << '\n';
        }
        else
        {
            if (Xor == 0)
                cout << Xor << '\n';
            else
                cout << -1 << '\n';
        }
    }
}