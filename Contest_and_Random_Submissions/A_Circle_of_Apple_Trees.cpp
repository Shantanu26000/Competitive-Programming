#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
        int ans = 0;
        for(auto it:mp){
            ans++;
        }
        cout<<ans<<'\n';
    }
}