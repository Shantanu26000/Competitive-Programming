#include<bits/stdc++.h>
using namespace std;
int mex(vector<long long>& a) {
    int n = a.size();
    vector<bool> seen(n + 1, false);

    for (long long x : a) {
        if (0 <= x && x <= n) seen[x] = true;
    }

    for (int i = 0; i <= n; i++) {
        if (!seen[i]) return i;
    }
    return n + 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<long long>a(n);
       for(int i=0;i<n;i++) cin>>a[i];
       sort(a.begin(),a.end());
       long long maxi=a[n-1];
       if(maxi<mex(a)) return mex(a);
       int j=1;
       bool found=false;
       while(j<n){
        if(a[j]-a[j-1]==1) {
            found==true;
            break;
        }
       }
       if(found==true){
        
       }
    }
}