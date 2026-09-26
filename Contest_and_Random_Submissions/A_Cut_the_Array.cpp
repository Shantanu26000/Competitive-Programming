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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> prefixsum(n);
        prefixsum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            prefixsum[i] = (prefixsum[i - 1] + a[i]);
        }
        bool found = false;
        int l = 0;
        int r = 0;
        for (int i = 0; i + 2 < n && found == false; i++)
        {
            for (int j = i+1; j + 1 < n; j++)
            {
                int op1 = prefixsum[i] % 3;
                int op2 = (prefixsum[j] - prefixsum[i]) % 3;
                int op3 = (prefixsum[n - 1] - prefixsum[j]) % 3;
                if ((op1 == op2 && op2 == op3 && op3 == op1) || (op1 != op2 && op2 != op3 && op3 != op1))
                {
                    l = i+1;
                    r = j+1;
                    found = true;
                    break;
                }
            }
        }
            cout << l<< " " << r << '\n';  
    }
}