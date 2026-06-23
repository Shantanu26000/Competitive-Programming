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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> prefix(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            prefix[i + 1] = prefix[i] + (s[i] == 'W');
        }
        int mini = INT_MAX;
        for (int i = 0; i <= n - k; i++)
        {
            int diff = prefix[i + k] - prefix[i];
            mini = min(diff, mini);
        }
        cout << mini << '\n';
    }
}