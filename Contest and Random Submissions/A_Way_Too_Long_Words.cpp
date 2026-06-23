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
        string s;
        cin >> s;
        int n = s.size();
        if (n <= 10)
        {
            cout << s << '\n';
            continue;
        }
        int val = n - 2;
        string temp;
        temp.push_back(s[0]);
        temp += to_string(val);
        temp.push_back(s[n - 1]);
        cout << temp << '\n';
    }
}
