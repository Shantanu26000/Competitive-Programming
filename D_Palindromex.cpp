#include <bits/stdc++.h>
using namespace std;
pair<bool, int> isPallindrone_Mex(int st, int en, vector<int> &a, int n)
{
    bool found = true;
    vector<int> temp;
    while (st <= en)
    {
        if (a[st] != a[en])
        {
            found = false;
            break;
        }
        temp.push_back(a[st]);
        st++;
        en--;
    }
    if (found == true)
    {
        vector<bool> p(n, false);
        int mex = 0;
        for (int i = 0; i < temp.size(); i++)
        {
            p[temp[i]] = true;
        }
        for (int i = 0; i < n; i++)
        {
            if (p[i] == true)
                mex = i + 1;
            else
            {
                break;
            }
        }
        return {true, mex};
    }
    else
        return {false, -1};
}

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

        vector<int> a(2 * n);
        unordered_set<int> s;
        unordered_map<int, vector<int>> mp;
        int ans = INT_MIN;

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            mp[a[i]].push_back(i);
        }

        for (int i : s)
        {
            pair<bool, int> kp;
            kp = isPallindrone_Mex(mp[i][0], mp[i][1], a, n);
            if (kp.second == n)
            {
                ans = n;
                break;
            }
            if (kp.first == true)
            {
                ans = max(ans, kp.second);
            }
        }
        cout << ans << '\n';
    }
}