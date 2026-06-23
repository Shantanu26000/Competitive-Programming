#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                ans++;
            }
        }
        a.erase(remove(a.begin(), a.end(), 1), a.end());
        int k = a.size();
        
        for (int i = 0; i < k; )
        {
            int j = i;
            while (j + 1 < k && a[j + 1] - a[j] == 1)
                j++;

            if (j > i)
                ans += (j - i + 1);

            i = j + 1;
        }
        cout << ans << endl;
    }
}
