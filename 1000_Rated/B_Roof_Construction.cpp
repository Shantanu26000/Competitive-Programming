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
        n--;
        long long msb = log2(n);
        long long temp = pow(2, msb) - 1;
        vector<int> ans;
        while (temp >= 0)
        {
            ans.push_back(temp);
            temp--;
        }
        temp = pow(2, msb);
        while (temp <= n)
        {
            ans.push_back(temp);
            temp++;
        }
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << '\n';
    }
}