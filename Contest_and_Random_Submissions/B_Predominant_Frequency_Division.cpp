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
        int one_count = 0;
        int i=0;
        bool found = false;
        while(i<n){
              if(one_count>=0 && i!=0) {
                    found = true;
                    while(i<n && a[i]==3 && one_count>0){
                        one_count--;
                        i++;
                    }
                    break;
                 }
                 if(a[i]==1) {
                    one_count++;
                    i++;
                 }
                 else {
                    one_count--;
                    i++;
                 }
        }

        if(found==false) {
        cout<<"NO"<<'\n'; 
        continue;
    }

           found = false;
           one_count = 0;
           while(i<n){
                if(a[i]==3){
                    one_count--;
                    i++;
                }
                else  {
                    one_count++;
                    i++;
                }
                if(one_count>=0) {
                    found = true;
                    break;
                }
           }

           if(found==false) {
            cout<<"NO"<<'\n';
            continue;
           }
           found = false;


           if(i<=(n-1)){
            cout<<"YES"<<'\n';
           }
           else{
            cout<<"NO"<<'\n';
           }
    }
}