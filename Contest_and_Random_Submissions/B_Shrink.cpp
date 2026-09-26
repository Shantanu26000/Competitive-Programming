#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        a[0] = 1;
        for(int i=1;i<n;i++){
            a[i] = n-i+1;
        }
        for(auto it:a) cout<<it<<" ";
        cout<<'\n';
    }
}