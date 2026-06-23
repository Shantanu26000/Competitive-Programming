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
        int answer = a[n - 1] - a[0];
        for (int i = 1; i < n; i++)
        {
            answer = max(answer, (a[i] - a[0]));
        }
        for (int i = 0; i < n - 1; i++)
        {
            answer = max(answer, (a[n - 1] - a[i]));
        }
        for (int i = 0; i < n - 1; i++)
        {
            answer = max(answer, (a[i] - a[i + 1]));
        }
        cout << answer << '\n';
    }
}