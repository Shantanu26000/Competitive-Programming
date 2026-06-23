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
        int two_count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
                two_count++;
        }
        if (two_count == 0)
        {
            cout << 1 << '\n';
            continue;
        }
        if ((two_count & 1) == 0)
        {
            int val = two_count / 2;
            int k = 0;
            for (int i = 0; i < n; i++)
            {
                if (val == 0)
                {
                    k = i;
                    break;
                }
                if (a[i] == 2)
                    val--;
            }
            cout << k << '\n';
        }
        else
        {
            cout << -1 << '\n';
        }
    }
}