#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ans=0;
        for(long long i=1;i<=n;i++){
            if((n%i)==0) ans++;
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
}