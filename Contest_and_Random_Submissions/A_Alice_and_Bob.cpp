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
        long long a;
        cin >> a;
        vector<long long> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(), v.rend());
        int ans = INT_MIN;
        int op1 = 0;
        int op2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > a)
                op1++;
            else
                op2++;
        }
        ans = max(ans, op1);
        op1 = 0;
        op2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < a)
                op1++;
            else
                op2++;
        }
        if (op1 > ans)
        {
            cout << a - 1 << '\n';
        }
        else
        {
            cout << a + 1 << '\n';
        }
    }
}