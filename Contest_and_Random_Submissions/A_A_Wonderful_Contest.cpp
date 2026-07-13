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
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 100)
                found = true;
        }
        if (found == true)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}