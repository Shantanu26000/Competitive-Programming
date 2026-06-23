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
        vector<long long> a(n);
        vector<pair<pair<long long, int>, int>> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i].first.first = a[i];
            b[i].second = i;
        }
        sort(b.begin(), b.end(), [](auto &x, auto &y)
             { return x.first.first < y.first.first; });
        vector<long long> prefix(n);
        prefix[0] = b[0].first.first;
        for (int i = 1; i <n; i++)
        {
            prefix[i] = prefix[i - 1] + b[i].first.first;
        }
        
        for(int i=0;i<n;i++){
            int j=i;
            int found=j;
            while(j<n){
                long long temp = prefix[j]+1;
                auto it= lower_bound(b.begin(),b.end(),temp,[]( const pair<pair<long long,int>,int>&x, long long value){
                          return x.first.first < value;
                });
                long long idx= it - b.begin();
                idx--;
                if(idx==j) break;
                    found+=idx-found;
                    j=idx;
            }
            b[b[i].second].first.second=found;
        }
        for(int i=0;i<n;i++){
            cout<<b[i].first.second<<" ";
        }
        cout<<'\n';
    }
}