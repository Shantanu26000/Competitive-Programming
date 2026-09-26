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
        int i=0;
        int cnt = 0;
        vector<bool>safe(n,true);
        for(int i=0;i<n;i++){
            if(s[i]=='1') {
                safe[i] = false;
                if((i-1)>=0) safe[i-1] = false;
                if((i+1)<n) safe[i+1] = false;
                cnt++;
            }
        }
        while(i<n){
              if(s[i]=='1'){
                i+=2;
              }
              else{
                    i++;
                    if(i<n){
                        if(s[i]=='1') {
                            i+=2;
                        }
                        else{
                            if(safe[i]==true){
                                cnt++;
                                i+=2;
                            }
                            else{
                                i++;
                            }
                            
                        }
                    }
                    else{
                        cnt++;
                    }
              }
        }
        cout<<cnt<<'\n';
    }
}