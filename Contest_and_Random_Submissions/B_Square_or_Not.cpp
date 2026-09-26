#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long temp = sqrt(n);
        if ((temp * temp) != n)
        {
            cout << "No" << '\n';
            continue;
        }
        int ones_cnt = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
                ones_cnt++;
        
        if ((4*temp - 4) == ones_cnt)
        {
            cout << "Yes" << '\n';
        }
        else
        {
            cout << "No" << '\n';
        }
    }
}