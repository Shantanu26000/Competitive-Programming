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
        int s, k, m;
        cin >> s >> k >> m;
        // Case 1 : s==k
        if (s == k)
        {
            if (m % k == 0)
            {
                cout << k << '\n';
            }
            else
            {
                int temp = (m / k) + 1;
                temp = temp * k;
                cout << temp - m << '\n';
            }
        }

        /// Case 2:  s>k

        else if (s > k)
        {
            int rem = m % (2 * k);

            if (rem < k)
            {
                cout << s - (m % k) << '\n';
            }
            else
            {
                cout << k - (m % k) << '\n';
            }
        }
        /// Case 3: s<k

        else
        {
            if (m % k < s)
            {
                cout << s - (m % k) << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
    }
}