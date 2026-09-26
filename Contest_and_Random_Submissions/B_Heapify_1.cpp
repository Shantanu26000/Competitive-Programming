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
        for (int i = 0; i < n; i++)
            cin >> a[i];           
            bool found = true;
            for(int i=1;i<=n;i+=2){
                for(int j=i;j<=n;j*=2){
                     if(((a[j-1])%i)==0 && (((a[j-1])/i) & (((a[j-1])/i)-1))==0) continue;
                     else {
                        found = false;
                        break;
                     }
                }
                if(found==false) break; 
            }  
            if(found==true) cout<<"YES"<<'\n';
            else cout<<"NO"<<'\n';      
    }
}