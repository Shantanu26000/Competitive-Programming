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
        vector<int> w(n);
        for (int i = 0; i < n; i++)
            cin >> w[i];
        if (n == 1)
            cout << 0 << '\n';
        else
        {
            int ans = 0;
            int alice = 0;
            int bob = n - 1;
            long long alice_sum = w[alice];
            long long bob_sum = w[bob];
            while (alice < bob)
            {
                if (alice_sum == bob_sum)
                {
                    int temp = alice + 1 + n - bob;
                    ans = max(ans, temp);
                    alice++;
                    alice_sum += w[alice];
                }
                else if (alice_sum < bob_sum)
                {
                    alice++;
                    alice_sum += w[alice];
                }
                else
                {
                    bob--;
                    bob_sum += w[bob];
                }
            }
                cout << ans << '\n';
        }
    }
}