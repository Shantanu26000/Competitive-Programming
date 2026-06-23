#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n&1)!=0) {
            cout<<0<<'\n';
            continue;
        }
        int chicken = n/2;
        int ans = 1; 
        while(chicken!=1 && chicken!=0){
                   chicken -=2;
                   ans++;
        }
           cout<<ans<<'\n';
    }
}