#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long ans=INT_MAX;
        for(int i=0;i<32;i++){
            long long operations=i;
            long long b_copy=b;
            b_copy+=i;
            if(b_copy==1) continue;
            long long a_copy=a;
            while(a_copy>0){
                a_copy/=b_copy;
                operations++;
            }
            ans=min(ans,operations);
        }
        cout<<ans<<'\n';
    }
}