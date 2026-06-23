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
        vector<int> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        sort(c.begin(), c.end());
        if (c[0] != 1)
            cout << "NO" << '\n';
        else
        {
            long long curr_sum = c[0];
            bool found = false;
            for (int i = 1; i < n; i++)
            {
                if (c[i] > curr_sum)
                {
                    found = true;
                    break;
                }
                else
                {
                    curr_sum += c[i];
                }
            }
            if (found == true)
                cout << "NO" << '\n';
            else
                cout << "YES" << '\n';
        }
    }
}