#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    char mn = s[n - 1];
    int pos = n - 1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (mn < s[i])
        {
            cout << "YES\n";
            cout << i + 1 << " " << pos + 1 << "\n";
            return 0;
        }

        if (s[i] < mn)
        {
            mn = s[i];
            pos = i;
        }
    }

    cout << "NO\n";
}