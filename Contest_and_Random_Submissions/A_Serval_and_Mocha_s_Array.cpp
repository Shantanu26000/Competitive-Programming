#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool found = false;
        for (int i = 0; i < n && found == false; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == i)
                    continue;
                if (__gcd(a[i], a[j]) <= 2)
                {
                    found = true;
                    break;
                }
            }
        }
        if (found == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}