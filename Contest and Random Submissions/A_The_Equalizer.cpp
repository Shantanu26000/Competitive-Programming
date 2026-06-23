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
        int odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & 1) != 0)
                odd_count++;
        }
        bool shashank = true;
        if ((odd_count & 1) == 0)
        {
            shashank = false;
            if ((k & 1) == 0)
            {
                shashank = true;
            }
            else
            {
                if ((n & 1) == 0)
                    shashank = true;
            }
        }
        if (shashank == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}