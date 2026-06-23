#include<bits/stdc++.h>
using namespace std;
int UniqueElements(vector<int>&a){
    int ans=1;
 int n=a.size();
 sort(a.begin(),a.end());
 for(int i=1;i<n;i++){
    if(a[i]!=a[i-1]) ans++;
 }
   return ans; 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1) {cout<<a[0]<<endl;
        continue;}
        int ans=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]==UniqueElements(a) || a[i]>UniqueElements(a)) {
                ans=a[i];
                break;
            }
        }
        cout<<ans<<endl;
    }
}