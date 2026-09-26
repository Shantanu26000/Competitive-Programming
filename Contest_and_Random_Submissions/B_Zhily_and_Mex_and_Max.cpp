#include <bits/stdc++.h>
using namespace std;

using ll = long long;

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

        vector<ll> a(n);

        ll mx = 0;

        vector<int> freq(n + 2, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            mx = max(mx, a[i]);

            if (a[i] <= n + 1)
            {
                freq[a[i]]++;
            }
        }

        vector<bool> seen(n + 2, false);

        if (mx <= n + 1)
        {
            seen[(int)mx] = true;
        }

        int mex = 0;

        while (mex <= n + 1 && seen[mex])
        {
            mex++;
        }

        ll mexSum = mex;

        int pos = 1;

        while (pos < n)
        {

            if (mex <= n + 1 && freq[mex] > 0)
            {

                freq[mex]--;
                seen[mex] = true;

                pos++;

                while (mex <= n + 1 && seen[mex])
                {
                    mex++;
                }

                mexSum += mex;
            }
            else
            {

                mexSum += 1LL * (n - pos) * mex;

                break;
            }
        }

        ll answer = 1LL * n * mx + mexSum;

        cout << answer << '\n';
    }

    return 0;
}