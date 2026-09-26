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
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            mp[a[i]]++;
        }
        int ans = INT_MIN;
        int cnt = 1;
        vector<int>temp;
        for(auto it:mp){
          temp.push_back(it.second);
        }
        sort(temp.rbegin(),temp.rend());
        for(auto it:temp){
             ans = max(ans,it*cnt);
             cnt++;
        }
        cout<<ans<<'\n';
    }
}