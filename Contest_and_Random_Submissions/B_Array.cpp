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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> ans(n);
        int i = 0;
        while (i < n)
        {
            int counts = 0;
            int countb = 0;
            int j = i + 1;
            while (j < n)
            {
                if (a[i] < a[j])
                    countb++;
                else if (a[i] > a[j])
                    counts++;
                j++;
            }
            ans[i] = max(counts, countb);
            i++;
        }
        for (int x : ans)
            cout << x << " ";
        cout << '\n';
    }
}