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
        int n, q;
        cin >> n >> q;
        vector<long long> a(n), b(q);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < q; j++)
            cin >> b[j];
            vector<int> useful;
            int mn = INT_MAX;
            for(int i=0;i<q;i++){
                if(b[i] < mn) {
                useful.push_back(b[i]);
                mn = b[i];
                }
            }
            int k = useful.size();
        vector<int> power_of_two(n);
        for (int i = 0; i < n; i++)
            power_of_two[i] = __builtin_ctzll(a[i]);
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (power_of_two[j] >= useful[i])
                {
                    a[j] += (1LL << (useful[i] - 1));
                    power_of_two[j] = __builtin_ctzll(a[j]);
                }
            }
        }
        for (int k : a)
        {
            cout << k << " ";
        }
        cout << '\n';
    }
}