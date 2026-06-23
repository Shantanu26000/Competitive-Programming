#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = 0;
        bool flag = true;
        for (int j = n - 1; j > 0 && flag == true; j--)
        {
            if (a[j] > a[j - 1])
                continue;
            else
            {
                while (a[j] <= a[j - 1])
                {
                    a[j - 1] /= 2;
                    ans++;
                    if (a[j] == 0)
                    {
                        ans = -1;
                        flag = false;
                        break;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
}