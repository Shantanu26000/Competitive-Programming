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
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        else{
            sort(a.begin(),a.end());
            a.erase(unique(a.begin(),a.end()),a.end());
            int k=a.size();
            int curr=1;
            int best=1;
            for(int i=1;i<k;i++){
                if(a[i]==a[i-1]+1) curr++;
                else curr=1;
                best = max(best,curr);
            }
            cout<<best<<endl;
            continue;
        }
    }
}