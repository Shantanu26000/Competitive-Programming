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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
        {
            cout << 0 << '\n';
            continue;
        }

        bool even = false;
        if ((a[0] & 1) == 0)
            even = true;
        int i = 1;
        int ans = 0;
        while (i < n)
        {
            if ((a[i] & 1) == 0)
            {
                if (even == true)
                {
                    ans++;
                    int product = a[i] * a[i - 1];
                    if ((product & 1) == 0)
                        even = true;
                    else
                        even = false;
                }
                else
                {
                    even = true;
                }
            }
            else
            {
                if (even == false)
                {
                    ans++;
                    int product = a[i] * a[i - 1];
                    if ((product & 1) == 0)
                    {
                        even = true;
                    }
                    else
                    {
                        even = false;
                    }
                }
                else
                {
                    even = false;
                }
            }
            i++;
        }
        cout<<ans<<'\n';
    }
}