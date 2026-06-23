#include<bits/stdc++.h>
using namespace std;
long long prime(long long p){
    for(long long i=p;;i++){
        bool isPrime=true;
        for(long long k=2;k*k<=i;k++){
              if(i%k==0) {
                isPrime=false;
                break;
              }
        }
        if(isPrime==true) return i;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int d;
        cin>>d;
        int p=prime(d+1);
        int q=prime(d+p);
        long long ans=min(1LL*p*p*p,1LL*p*q);
        cout<<ans<<'\n';
    }
}