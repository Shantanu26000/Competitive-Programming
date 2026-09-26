#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.rbegin(),a.rend());
        int val = a[0];
        int i=1;
        while(i<n && a[i]==val){
            i++;
        }
        i--;
        if(i%2!=0 || i==0) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}