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
        int n, c;
        cin >> n >> c;
        vector<int> a(n);
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += k;
            k++;
        }
        sort(a.begin(), a.end());
        int sum = 0;
        int count = 0;
        for (int b : a)
        {
            sum += b;
            if (sum <= c)
                count++;
            else
                break;
        }
        cout << count << '\n';
    }
}