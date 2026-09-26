#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0]>=k){
            cout<<a[n-1] - k<<'\n';
            continue;
        }
        if(a[n-1]<=k){
            cout<<k-a[0]<<'\n';
            continue;
        }

        cout<< 2* min(k-a[0],a[n-1]-k) + max(k-a[0],a[n-1]-k)<<'\n';
    }
}