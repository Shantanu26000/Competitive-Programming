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
        long long n, m, i, j;
        cin >> n >> m >> i >> j;
        long long column1 = 1;
        long long column2 = m;
        long long row1 = 1;
        long long row2 = n;
        cout << row1 << " " << column1 << " " << row2 << " " << column2 << '\n';
    }
}