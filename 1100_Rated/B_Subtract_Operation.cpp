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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, bool> mp;
        for (auto it : a)
        {
            mp[it] = true;
        }
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(a[i] - k) != mp.end())
            {
                found = true;
                break;
            }
        }
        if (found == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}