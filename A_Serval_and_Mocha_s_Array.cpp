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
        sort(a.begin(),a.end());
        if(a[0]==1) {
            cout<<"Yes"<<'\n';
        }
        else{
                   int g = a[0];
                   bool found = false;
                   for(int i=1;i<n;i++){
                        g = __gcd(g,a[i]);
                        if(g>(i+1)){
                            found = true;
                            break;
                        }
                   }
                   if(found==true) cout<<"No"<<'\n';
                   else cout<<"Yes"<<'\n';
        }
    }
}