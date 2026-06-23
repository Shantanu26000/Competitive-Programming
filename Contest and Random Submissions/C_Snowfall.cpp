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
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> six_multiple;
        vector<int> two_multiple;
        vector<int> three_multiple;
        vector<int> other;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 6 == 0)
                six_multiple.push_back(a[i]);
            else if (a[i] % 2 == 0)
                two_multiple.push_back(a[i]);
            else if (a[i] % 3 == 0)
                three_multiple.push_back(a[i]);
            else
                other.push_back(a[i]);
        }
        int tw = two_multiple.size();
        int th = three_multiple.size();
        int op = other.size();
        int i = 0;
        while (tw--)
        {
            six_multiple.push_back(two_multiple[i]);
            i++;
        }
        i = 0;
        while (op--)
        {
            six_multiple.push_back(other[i]);
            i++;
        }
        i = 0;
        while (th--)
        {
            six_multiple.push_back(three_multiple[i]);
            i++;
        }

        for (int k : six_multiple)
        {
            cout << k << " ";
        }
        cout << '\n';
    }
}