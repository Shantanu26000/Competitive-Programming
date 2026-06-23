#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int mini1 = INT_MAX;
        int mini2 = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mini1)
            {
                mini2 = mini1;
                mini1 = a[i];
            }
            else if (a[i] < mini2)
            {
                mini2 = a[i];
            }
        }

        int ans = mini1;
        bool found = false;
        int temp = ans;
        while (ans <= temp)
        {
            temp++;
            int diff = mini2 - mini1;
            if (diff >= temp)
            {
                ans = temp;
            }
            else
            {
                break;
            }
        }
        cout << ans << '\n';
    }
}