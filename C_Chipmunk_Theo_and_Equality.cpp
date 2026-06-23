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
        unordered_map<int, long long> total;
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            vector<pair<int,int>>path;
            int x = a[i];
            int steps = 0;
            while (true)
            {
                path.push_back({x,steps});
                if(x==1) break;
                steps++;
                if (x % 2 == 0)
                    x /= 2;
                else
                    x += 1;
            }

            for(auto &p:path){
              int element = p.first;
              int step = p.second;
              total[element]+=step;
              freq[element]++;
            }
        }
        long long ans = LLONG_MAX;
        for (auto it : freq)
        {
            int val = it.first;
            long long cnt = it.second;
            if (cnt == n)
            {
                ans = min(ans, 1*(long long)total[val]);
            }
        }
        cout << ans << '\n';
    }
}