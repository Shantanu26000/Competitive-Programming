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
        long long x;
        cin >> x;
        vector<int> temp;
        long long sum = 0;
        while (x > 0)
        {
            temp.push_back(x % 10);
            sum += (x % 10);
            x /= 10;
        }
        if (sum < 10)
        {
            cout << 0 << '\n';
            continue;
        }
        int first = temp.back();
        int ans = 0;
        bool found = false;
        sort(temp.rbegin(), temp.rend());
        int i = 0;
        while (i < temp.size())
        {
            if (sum < 10)
                break;
            if (temp[i] == first && found == false)
            {
                found = true;
                i++;
                bool in_loop = false;
                bool sum_found = false;
                while (i < temp.size() && temp[i] == first)
                {
                    if (sum < 10)
                    {
                        sum_found = true;
                        break;
                    }
                    in_loop = true;
                    sum -= (temp[i]);
                    ans++;
                    i++;
                }
                if (sum < 10)
                    break;
                if (sum_found == true)
                    break;
                if (in_loop == false)
                {
                    i--;
                    sum -= (first - 1);
                    ans++;
                    i++;
                }
                else
                {
                    sum -= (first- 1);
                    ans++;
                }
            }
            else
            {
                sum -= temp[i];
                ans++;
                i++;
            }
        }
        cout << ans << '\n';
    }
}