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
        vector<bool>k(75,false);
        int ans=0;
        vector<int>prefix(n);
        vector<int>suffix(n);
        for(int i=0;i<n;i++){
             if(k[s[i]-'0']==false){
                ans++;
                prefix[i]=ans;
                k[s[i]-'0']=true;
             }
             else{
                prefix[i]=ans;
             }
        }
        ans=0;
        fill(k.begin(),k.end(),false);
        for(int j=n-1;j>=0;j--){
            if(k[s[j]-'0']==false){
                  ans++;
                  suffix[j]=ans;
                  k[s[j]-'0']=true;
            }
            else{
                suffix[j]=ans;
            }
        }
        int finalans=INT_MIN;
        int f=0;
        while(f<n-1){
            finalans=max(finalans,prefix[f]+suffix[f+1]);
            f++;
        } 
        cout<<finalans<<'\n'; 
    }
}