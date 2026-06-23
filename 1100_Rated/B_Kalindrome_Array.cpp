#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& a, int x)
{
    int st = 0, en = a.size() - 1;
    while (st < en)
    {
        if (a[st] == a[en])
        {
            st++;
            en--;
        }
        else if (a[st] == x)
        {
            st++;
        }
        else if (a[en] == x)
        {
            en--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int st = 0, en = n - 1;

        while (st < en && a[st] == a[en])
        {
            st++;
            en--;
        }

        if (st >= en)
        {
            cout << "YES\n";
            continue;
        }

        if (check(a, a[st]) || check(a, a[en]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}