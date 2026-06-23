#include <bits/stdc++.h>
using namespace std;
vector<int> solve()
{
      int n, k;
    cin >> n >> k;
    vector<int> ans(k);
    if (k == 1)
    {
        ans[0] = n;
    }
    else  if ((k&1) == 0)
        {
            ans[0] = 0;
            for (int i = 1; i < k; i++) ans[i] = n;
        }
        else
        {
            for (int i = 0; i < k; i++) ans[i] = n;
        }
    
      return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {  
       vector<int> result=  solve();
         for(int p:result ) cout<<p<<" ";
         cout<<endl;
         continue;
    }
}
