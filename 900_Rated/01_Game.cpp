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
        int k = s.size();
        int zcount = 0;
        int ocount = 0;
        for (char ch : s)
        {
            if (ch == '0')
                zcount++;
            else
                ocount++;
        }
        int mini = min(ocount, zcount);
        if ((mini & 1) == 0)
            cout << "NET" << '\n';
        else
            cout << "DA" << '\n';
    }
}