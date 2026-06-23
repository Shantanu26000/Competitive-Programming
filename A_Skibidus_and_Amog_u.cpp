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
        string w;
        cin >> w;
        w.pop_back();
        w.pop_back();
        w.push_back('i');
        cout << w << '\n';
    }
}