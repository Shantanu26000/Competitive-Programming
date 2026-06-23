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
        char c;
        cin >> c;
        string s;
        cin >> s;
        s += s;
        n *= 2;
        int last_greenindex = -1;
        int maxseconds = INT_MIN;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
                last_greenindex = i;
            if (s[i] == c)
            {
                int diff = last_greenindex - i;
                maxseconds = max(maxseconds, diff);
            }
        }
        cout << maxseconds << '\n';
    }
}