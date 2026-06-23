#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n),ans(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            ans[i]=n+1-a[i];
        } 
        for(int x:ans) cout<<x<<" ";
        cout<<'\n';
    }
}