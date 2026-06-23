#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        //  First method but Time Complexity is O(nlongn)
        int n;
        cin>>n;
        vector<long long>b(n);
        for(int i=0;i<n;i++) cin>>b[i];
        // sort(b.begin(),b.end());
        // bool found=false;
        // for(int i=0;i<n-1;i++){
        //     if(b[i]==b[i+1]){
        //         found=true;
        //         break;
        //     }
        // }
        // if(found==true) {
        //     cout<<"YES"<<'\n';
        // }
        // else{
        //     cout<<"NO"<<'\n';
        // }
   

        // Second Method Time Complexity is O(n)
        unordered_set<long long>s;
        for(int i=0;i<n;i++){
            s.insert(b[i]);
        }
        if(s.size()<n) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}