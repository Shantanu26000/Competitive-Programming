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
        int n, r, b;
        cin >> n >> r >> b;
        string s;
        int original_b = b;
        int divison_by = original_b + 1;
        while (b--)
        {
            s += 'B';
        }
        int perblock_red = r / divison_by;
        int left = r % divison_by;
        string temp;
        while (perblock_red--)
        {
            temp += 'R';
        }

        string finalans;
        for (char c : s)
        {
            finalans += (temp);
            finalans += c;
        }
        finalans += temp;
        if (left == 0)
        {
            cout << finalans << '\n';
            continue;
        }
        string result;
        int count = 0;
        for (char ch : finalans)
        {
            if (ch == 'B' && count < left)
            {
                result += 'R';
                result += ch;
                count++;
            }
            else
            {
                result += ch;
            }
        }
        cout << result << '\n';
    }
}