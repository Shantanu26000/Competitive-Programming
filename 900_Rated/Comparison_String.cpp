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
        int curr=1;
        int best=1;
        for(int i=0;i<n-1;i++){
            if(s[i]==s[i+1]) curr++;
            else curr=1;
            best=max(curr,best);
        }
        cout<<best+1<<endl;
    }
}