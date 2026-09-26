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
        string s;
        cin>>s;
        int cnt = 0;
        for(int i=0;i<n;i++) {
            if(s[i]=='1') cnt++;
        }
        bool found = false;
        if(cnt==2){
            for(int i=0;i<n-1;i++){
                if(s[i]=='1' && s[i+1]=='1') {
                    found = true;
                    break;
                }
            }
            if(found) cout<<"NO"<<'\n';
            else cout<<"YES"<<'\n';
        }
        else{
                    if((cnt&1)==0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
        }
       
    }
}