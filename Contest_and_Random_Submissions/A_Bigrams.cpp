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
        int two_count = 0;
        int greater = 0;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]>=3) greater++;
            if(a[i]==2) two_count++;
        }
        if(greater>=1 || two_count>=2) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
}