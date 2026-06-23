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
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        vector<int> ans;
        ans.push_back(a[0]);
        ans.push_back(a[1]);
        for (int i = 2; i < n; i++)
        {
            int k = ans.size();
            int x = ans[k - 2] - ans[k - 1];
            int y = ans[k - 1] - a[i];
            if (x > 0)
            {
                if (y > 0)
                    ans[k - 1] = a[i];
                else if (y < 0)
                    ans.push_back(a[i]);
            }
            else
            {
                if (y < 0)
                    ans[k - 1] = a[i];
                else if (y > 0)
                    ans.push_back(a[i]);
            }
        }
        int final = ans.size();
        if (ans[0] == ans[1])
            final--;
        cout << final << '\n';
    }
}