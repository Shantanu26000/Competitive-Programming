#include <bits/stdc++.h>
using namespace std;
int solve(int n, int k)
{
    queue<pair<int, int>> q;
    unordered_set<int> vis;
    q.push({n, 0});
    vis.insert(n);
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int x = p.first;
        int steps = p.second;
        q.pop();
        if (x == k)
            return steps;
        if (x < k || x == 0)
            continue;

        int a = x / 2;
        int b = (x + 1) / 2;
        if (!vis.count(a))
        {
            q.push({a, steps + 1});
            vis.insert(a);
        }
        if (!vis.count(b))
        {
            q.push({b, steps + 1});
            vis.insert(b);
        }
    }
    return -1;
}
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
        cout << solve(n, k) << '\n';
    }
}