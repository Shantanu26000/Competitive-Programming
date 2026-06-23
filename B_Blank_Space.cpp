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
        {
            cin >> a[i];
        }
        int ans = 0;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                temp++;
                ans = max(ans, temp);
            }
            else
            {
                temp = 0;
            }
        }
        cout << ans << '\n';
    }
}