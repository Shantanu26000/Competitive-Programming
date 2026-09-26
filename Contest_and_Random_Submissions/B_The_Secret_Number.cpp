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
        long long n;
        cin >> n;
        vector<long long> temp;
        long long base = 1;
        for (int i = 1; i <= 17; i++)
        {
            base *= 10;
            long long val = base + 1;
            if (n >= val)
            {
                if (n % val == 0)
                    temp.push_back(n / val);
            }
            else
            {
                break;
            }
        }
        cout << temp.size() << '\n';
        if (temp.size() != 0)
        {
            for (int i = temp.size() - 1; i >= 0; i--)
                cout << temp[i] << " ";
            cout << '\n';
        }
    }
}