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
        string s;
        cin >> s;
        int n = s.size();
        s += s;
        long long count = 0;
        long long ans = 0;
        for (char ch : s)
        {
            if (ch == '1')
            {
                count++;
                ans = max(ans, count);
            }
            else
            {
                count = 0;
            }
        }
        if (ans == 0)
            cout << 0 << '\n';
        else if (ans == 2 * n)
            cout << 1LL * n * n << '\n';
        else
        {
            long long  finalresult = LLONG_MIN;
            long long i = 1;
            while (ans > 0)
            {
                long long result = ans * i;
                finalresult = max(result, finalresult);
                ans--;
                i++;
            }
            cout << finalresult << '\n';
        }
    }
}