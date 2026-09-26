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
        int even1 = 0;
        int even2 = 0;
        int odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & 1) == 0)
            {
                if (((a[i] / 2) & 1) == 0)
                    even1++;
                else
                    even2++;
            }
            else
                odd++;
        }
        cout << max(odd, max(even1, even2)) << '\n';
    }
}