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
        int k;
        cin >> k;
        vector<int> a(k);
        vector<int> b;
        vector<int> c;
        for (int i = 0; i < k; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                b.push_back(a[i]);
            else
            {
                if (c.size() == 0)
                    c.push_back(a[i]);
                else
                {
                    int f = c[0];
                    if (a[i] % f == 0)
                    {
                        c.push_back(a[i]);
                    }
                    else
                    {
                        b.push_back(a[i]);
                    }
                }
            }
        }
        if (c.size() != 0 && b.size() != 0)
        {
            cout << b.size() << " " << c.size() << '\n';
            for (int i = 0; i < b.size(); i++)
                cout << b[i] << " ";
            cout << '\n';
            for (int i = 0; i < c.size(); i++)
                cout << c[i] << " ";
            cout << '\n';
        }
        else
        {
            if (c.size() == 0)
                cout << -1 << '\n';
            else
            {
                sort(c.begin(), c.end());
                if (c[0] == c[int(c.size()) - 1])
                    cout << -1 << '\n';
                else
                {
                    int temp = c[c.size() - 1];
                    for (int i = c.size() - 1; i >= 0; i--)
                    {

                        if (c[i] == temp)
                        {
                            b.push_back(c[i]);
                            c.pop_back();
                        }
                    }
                    cout << c.size() << " " << b.size() << '\n';
                    for (int i = 0; i < c.size(); i++)
                        cout << c[i] << " ";
                    cout << '\n';
                    for (int i = 0; i < b.size(); i++)
                        cout << b[i] << " ";
                    cout << '\n';
                }
            }
        }
    }
}