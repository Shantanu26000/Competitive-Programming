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
        if (n == 1)
        {
            cout << 1 << '\n';
            continue;
        }
        vector<bool> found(1e5, false);
        int curr = 2;
        int prev = 1;
        vector<int> ans;
        while (n > 0)
        {
            int sum = curr + prev;
            if (found[curr] == false && found[sum] == false)
            {
                found[prev] = true;
                found[curr] = true;
                found[sum] = true;
                ans.push_back(prev);
                n--;
                prev = curr;
                curr++;
            }
            else
            {
                curr++;
            }
        }
        for (int x : ans)
            cout << x<<' ';
        cout << '\n';
    }
}