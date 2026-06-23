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
        unordered_map<char, int> mp;
        int count = 0;
        long long ans = 0;
        for (char k : s)
        {
            mp[k]++;
            if (mp[k] == 1)
                count++;
            ans += count;
        }
        cout << ans << '\n';
    }
}