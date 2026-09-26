#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int g = __gcd(x,y);
        bool found = false;
        for(int i=0;i<n;i++){
            if(abs(i+1-a[i])%g!=0) {
                found = true;
                break;
            }
        }
        if(found) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
}