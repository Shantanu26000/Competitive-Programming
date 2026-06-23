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
        n *= 3;
        int grps = n / 3;
        int first = n + ((grps - 1) * (-2));
        vector<int> ans;
        int i = 1;
        while (grps--)
        {
            ans.push_back(i);
            ans.push_back(first);
            first--;
            ans.push_back(first);
            first += 3;
            i++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << '\n';
    }
}