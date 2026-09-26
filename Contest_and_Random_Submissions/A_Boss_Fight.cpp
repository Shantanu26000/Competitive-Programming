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
        map<int, int> freq;

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            freq[a[i]]++;
        }

        int mxFreq = 0;
        int mxValue = 0;

        for (auto it : freq)
        {
            if (it.second > mxFreq)
            {
                mxFreq = it.second;
                mxValue = it.first;
            }
        }

        int other = n - mxFreq;

        if (mxFreq <= other + 1)
        {
            cout << sum << '\n';
        }
        else
        {
            int ans = sum - mxFreq * mxValue;
            ans += (other + 2) * mxValue;

            cout << ans << '\n';
        }
    }

    return 0;
}