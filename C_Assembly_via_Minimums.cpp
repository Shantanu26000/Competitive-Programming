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
        int k = ((n)*(n-1))/2;
        vector<int>a(k);
        for(int i=0;i<k;i++) cin>>a[i];
        sort(a.begin(),a.end());
        vector<int>ans;
        int p = 1;
        int idx = n-1-1;
        while(p!=n){
            ans.push_back(a[idx]);
            p++;
            int temp = n-p;
            idx+=temp;
        }
        int last = ans.back();
        ans.push_back(last);
        for(auto i:ans) cout<<i<<" ";
        cout<<'\n';
    }
}