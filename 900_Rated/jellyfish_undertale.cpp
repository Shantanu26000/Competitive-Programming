#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        int n;
        cin>>a>>b>>n;
        vector<long long>x(n);
        for(int i=0;i<n;i++) {
            cin>>x[i];
        }
          long long ans=0;
          for(int i=0;i<n;i++){
            long long k=1;
            long long temp = min(k+x[i],a);
            ans += (temp - 1);
          }
         cout<<ans+b<<endl;
    }
}