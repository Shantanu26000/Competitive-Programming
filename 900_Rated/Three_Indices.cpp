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
            cin >> a[i];
        vector<int> leftmin(n), rightmin(n);
        leftmin[0] = a[0];
        rightmin[n - 1] = a[n - 1];
        bool found = false;
        for (int i = 1; i < n; i++)
        {
            leftmin[i] = min(leftmin[i - 1], a[i]);
        }
        for (int i = n - 2; i >= 0; i--)
        {
            rightmin[i] = min(rightmin[i + 1], a[i]);
        }
        for (int j = 1; j < n - 1; j++)
        {
            if (leftmin[j - 1] < a[j] && a[j] > rightmin[j + 1])
            {
                found = true;
                cout << "Yes" << '\n';
                int i = min_element(a.begin(), a.begin() + j) - a.begin();
                int k = min_element(a.begin() + j + 1, a.end()) - a.begin();
                cout << i + 1 << " " << j + 1 << " " << k + 1 << '\n';
                break;
            }
        }
        if (found == false)
            cout << "No" << '\n';
    }
}