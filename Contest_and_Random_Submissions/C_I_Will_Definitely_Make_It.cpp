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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int val = a[k - 1];
        sort(a.begin(), a.end());
        int index = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == val)
            {
                index = i;
                break;
            }
        }
        int max_timer = val;
        int curr_timer = 0;
        bool found = false;
        for (int i = index + 1; i < n; i++)
        {
            int temp = a[i] - a[i - 1];
            if (temp <= (max_timer-curr_timer))
            {
                curr_timer += temp;
                max_timer = a[i];
            }
            else
            {
                found = true;
                break;
            }
        }
        if (found == false)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}