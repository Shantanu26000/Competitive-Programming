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
        int final_ans = INT_MAX;
        int ans  = 0;
        for(int i=0;i<n-1;i++){
            ans+=abs(a[i]-a[i+1]);
        }
           int temp = abs(a[0]-a[1]);
           final_ans = min(final_ans, ans-temp); 
           temp = abs(a[n-1]-a[n-2]);
           final_ans = min(final_ans,ans-temp);
           int i=1;
           while(i<n-1){
              int sub = abs(a[i-1]-a[i]) + abs(a[i+1]-a[i]);
              int add = abs(a[i-1]-a[i+1]);
              final_ans = min(final_ans, ans-sub+add);
              i++;
           }    
           cout<<final_ans<<'\n';
    }
}