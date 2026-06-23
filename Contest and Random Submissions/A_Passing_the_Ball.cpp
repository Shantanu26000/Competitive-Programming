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
        string s;
        cin >> s;
        int ans = 0;
        for (char ch : s)
        {
            if (ch == 'L')
                break;
            else
                ans++;
        }
        cout << ans + 1 << '\n';
    }
}