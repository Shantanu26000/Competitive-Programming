#include <bits/stdc++.h>
using namespace std;
pair<int, int> smallest_idx_element(int st, int en, vector<int> &nums)
{
    int f = nums[st];
    int i = st;
    st++;
    while (st <= en)
    {
        if (nums[st] < f)
        {
            f = nums[st];
            i = st;
        }
        st++;
    }
    return {i, f};
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, p, m;
        cin >> n >> k >> p >> m;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        pair<int, int> initial_pos(make_pair(p - 1, nums[p - 1]));

        int ans = 0;
        while (m > 0)
        {
             auto sm = smallest_idx_element(0, k - 1, nums);
            if (m >= sm.second)
            {
                if (initial_pos.first <= k - 1 && initial_pos.second <= m)
                {
                    int ini = initial_pos.first;
                    ans++;
                    m -= initial_pos.second;
                    nums.erase(nums.begin() + initial_pos.first);
                    nums.push_back(initial_pos.second);
                    initial_pos.first = n - 1;
                }
                else
                {
                    int removed = sm.first;
                    int val = sm.second;
                    m -= val;
                    nums.erase(nums.begin() + removed);
                    nums.push_back(val);
                    initial_pos.first -= 1;
                }
            }
            else
            {
                break;
            }
        }
        cout << ans << '\n';
    }
}