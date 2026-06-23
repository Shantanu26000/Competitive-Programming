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
        vector<int> a(n);
        int ans = INT_MAX;
        unordered_map<int, vector<int>> occur;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            occur[a[i]].push_back(i);
        }
        for (auto i : occur)
        {
            vector<int> diff;
            diff.push_back(i.second[0]);
            for (int j = 1; j < i.second.size(); j++)
            {
                diff.push_back(i.second[j] - i.second[j - 1] - 1);
            }
            diff.push_back(n - 1 - i.second[i.second.size() - 1]);
            int maxi = *max_element(diff.begin(), diff.end());
            int idx = max_element(diff.begin(), diff.end()) - diff.begin();
            diff[idx] = maxi / 2;
            ans = min(ans, *max_element(diff.begin(), diff.end()));
        }
        cout << ans << '\n';
    }
}