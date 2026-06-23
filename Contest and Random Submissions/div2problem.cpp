#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int mini=min(h,l);
        int maxi=max(h,l);
        long long small=0;
        long long  mid=0;
        for(int i=0;i<n;i++){
            if(a[i]<=mini) small++;
            else if(a[i]<=maxi) mid++;
        }
        cout<<(int)min(small,(small+mid)/2)<<endl;
    }
}