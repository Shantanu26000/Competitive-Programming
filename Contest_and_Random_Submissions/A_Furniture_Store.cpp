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
        for(int i=0;i<n;i++) cin>>a[i];
        int mini = a[0];
        int cnt = 0;
        vector<int>idx;
        for(int i=1;i<n;i++){
             if(a[i]>=mini) {
                cnt++;
                idx.push_back(i+1);
             }
             else mini = a[i];
        }
        cout<<cnt<<'\n';
        for(auto i:idx) cout<<i<<" ";
        cout<<'\n';
    }
}