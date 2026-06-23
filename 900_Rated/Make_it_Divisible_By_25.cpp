#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int k = n.size();
        int findex = -1;
        int zindex = -1;
        for (int i = 0; i < k; i++)
        {
            if (n[i] == '5')
                findex = i;
            if (n[i] == '0')
                zindex = i;
        }
        int ans1 = -1;
        if (findex != -1)
        {
            bool found = false;
            for (int i = findex - 1; i >= 0 && found == false; i--)
            {
                if (n[i] == '2' || n[i] == '7')
                {
                    ans1 = k - 1 - i - 1;
                    found = true;
                }
            }
        }
        int ans2 = -1;
        if (zindex != -1)
        {
            bool find = false;
            for (int i = zindex - 1; i >= 0 && find == false; i--)
            {
                if (n[i] == '5' || n[i] == '0')
                {
                    ans2 = k - 1 - zindex + (zindex - i - 1);
                    find = true;
                }
            }
        }
        if (ans1 == -1)
            cout << ans2 << '\n';
        else if (ans2 == -1)
            cout << ans1 << '\n';
        else
        {
            cout << min(ans1, ans2) << '\n';
        }
    }
}
