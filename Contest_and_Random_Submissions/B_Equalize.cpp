#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int>diff(n,0);
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++){
            if((a[i]-a[i-1])>=n) {

            }
            else diff[a[i]-a[i-1]]++;
        }
        int ans = INT_MIN;
        for(int i=1;i<n;i++){
            if(diff[i]==0) {

            }
            else{
                    int allowed = (n+i-1)/i;
                    if((diff[i]+1)>=allowed) ans = max(ans,allowed);
                    else ans = max(ans,diff[i]+1);
            }
        }
        if(ans==INT_MIN) cout<<1<<'\n';
        else cout<<ans<<'\n';
    }
}