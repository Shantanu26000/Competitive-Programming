#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0;
        int ans = 0;
        while (i < n)
        {
            if (a[i] == 0)
            {
                int cnt = 0;
                while (i < n && a[i] == 0)
                {
                    cnt++;
                    if (cnt == k)
                    {
                        ans++;
                        cnt = 0;
                        i++;
                    }
                    i++;
                }
            }
            else
            {
                i++;
            }
        }
        cout << ans << '\n';
    }
}