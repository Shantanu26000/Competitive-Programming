#include <bits/stdc++.h>
using namespace std;
int main()
{   ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, h;
        cin >> n >> m >> h;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<long long> b(m), c(m);
        for (int i = 0; i < m; i++)
        {
            cin >> b[i] >> c[i];
        }
        vector<long long>temp=a;
        for (int i = 0; i < m; i++)
        {
           temp[b[i]-1] +=c[i];
           if(temp[b[i]-1]>h) temp=a;
        }
        for(int i=0;i<n;i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        continue;
    }
}