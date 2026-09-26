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
        string a, b;
        cin >> a;
        cin >> b;
        if (a == b)
        {
            cout << 0 << '\n';
            continue;
        }
        vector<int> temp_a_even, temp_b_even, temp_a_odd, temp_b_odd;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                if ((i + 1) % 2 == 0)
                {
                    temp_a_even.push_back(i + 1);
                }
                else
                {
                    temp_a_odd.push_back(i + 1);
                }
            }
            if (b[i] == '1')
            {
                if ((i + 1) % 2 == 0)
                {
                    temp_b_even.push_back(i + 1);
                }
                else
                {
                    temp_b_odd.push_back(i + 1);
                }
            }
        }
        int x = temp_a_even.size();
        int y = temp_b_even.size();
        int p = temp_a_odd.size();
        int q = temp_b_odd.size();
        long long  ans = 0;
        if (x == y && p == q)
        {
            for (int i = 0; i < x; i++)
            {
                ans += abs(temp_a_even[i] - temp_b_even[i]);
            }
            for (int i = 0; i < p; i++)
            {
                ans += abs(temp_b_odd[i] - temp_a_odd[i]);
            }
            cout << ans / 2 << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}