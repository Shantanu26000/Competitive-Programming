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
        vector<int> negative(n, 0);
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                negative[i] = 1;
                count++;
            }
        }
        if (count == n)
        {
            cout << 0 << '\n';
            cout << '\n';
            continue;
        }
        vector<int> ans;
        int flip_parity = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int parity = negative[i] ^ flip_parity;
            if (parity == 1)
                continue;
            ans.push_back(i + 1);
            flip_parity ^= 1;
        }

        cout << ans.size() << '\n';
        for (int ab : ans)
            cout << ab << ' ';
        cout << '\n';
    }
}