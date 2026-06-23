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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (count >= 2)
                break;
            if (a[i] != 0)
            {
                count++;
                while ( i < n && a[i] != 0)
                {
                    i++;
                }
                i--;
            }
        }
        cout << count << '\n';
    }
}
