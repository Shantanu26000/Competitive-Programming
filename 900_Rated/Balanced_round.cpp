#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long k;
        cin>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        vector<long long>diff(n-1);
        for(int i=0;i<n-1;i++){
            diff[i]=a[i+1]-a[i];
        }
        long long curr=0;
        long long best=0;
        for(int i=0;i<n-1;i++){
                if(diff[i]<=k) {
                    curr++;
                    best=max(best,curr);
                }
                else{
                       curr=0;
                }
        }
        cout<<n-(long long)(best+1)<<endl;
    }
}