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
        bool found1 = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 67)
                found1 = true;
        }
        if (found1 == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}