#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long d;
    cin >> d;
    vector<long long> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p.begin(), p.end());
    int finalans = 0;
    int e = n - 1;
    int s = 0;
    while (s < e)
    {
        if (p[e] > d)
        {
            finalans++;
            e--;
        }
        else if (p[e] == d)
        {
            e--;
            s++;
            finalans++;
        }
        else
        {
            long long temp = d / p[e];
            if (e - s >= temp)
                finalans++;
            s += temp;
            e--;
        }
    }
    if (s == 0 && p[0] > d)
        cout << finalans + 1 << '\n';
    else
        cout << finalans << '\n';
}