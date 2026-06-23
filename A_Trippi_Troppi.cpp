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
        string si, sj, sk;
        cin >> si >> sj >> sk;
        string ans;
        if (si.size() != 0)
            ans.push_back(si[0]);
        if (sj.size() != 0)
            ans.push_back(sj[0]);
        if (sk.size() != 0)
            ans.push_back(sk[0]);
        cout << ans << '\n';
    }
}