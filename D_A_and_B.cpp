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
        string s;
        cin >> s;

        int total_a = 0, total_b = 0;
        for (char c : s)
        {
            if (c == 'a') total_a++;
            else total_b++;
        }

        // Case 1: group 'a'
        int swaps_a = INT_MAX;
        if (total_a > 0)
        {
            int bad = 0;

            // first window
            for (int i = 0; i < total_a; i++)
                if (s[i] == 'b') bad++;

            swaps_a = bad;

            // sliding window
            for (int i = total_a; i < n; i++)
            {
                if (s[i] == 'b') bad++;
                if (s[i - total_a] == 'b') bad--;
                swaps_a = min(swaps_a, bad);
            }
        }

        // Case 2: group 'b'
        int swaps_b = INT_MAX;
        if (total_b > 0)
        {
            int bad = 0;

            for (int i = 0; i < total_b; i++)
                if (s[i] == 'a') bad++;

            swaps_b = bad;

            for (int i = total_b; i < n; i++)
            {
                if (s[i] == 'a') bad++;
                if (s[i - total_b] == 'a') bad--;
                swaps_b = min(swaps_b, bad);
            }
        }

        cout << min(swaps_a, swaps_b) << '\n';
    }
}