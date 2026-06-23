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
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int mid = n/2;
        int maxi = a[mid];
        int ans = 0;
        int idx_s = 0;
        int idx_e = n-1;
        while ( (idx_s<idx_e) && ( (a[idx_s] != maxi) || (a[idx_e]!=maxi) ))
        {
            ans++;
            idx_s++;
            idx_e--;
        }
        cout << ans << '\n';
    }
}