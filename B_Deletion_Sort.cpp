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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> temp = a;
        sort(temp.begin(), temp.end());
        if (temp == a)
        {
            cout << n << '\n';
            continue;
        }

        cout << 1 << '\n';
    }
}