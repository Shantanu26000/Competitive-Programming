#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<long long>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
      
       int s=0;
       int se=1;
        if(a[0]==1){
         s=1;
         se=2;
       }
       long long x=0;
       long long  y=0;
       bool found=false;
       while((se>s) && (se!=s) && (se<=n-1 && s<n-1)){
        long long mod=((a[se])%(a[s]));
        if((mod & 1)==0){
             x=a[s];
             y=a[se];
            found=true;
            break;
        }
        else{
            if(se==n-1){
                s++;
                se=s+1;
            }
            else{
            se++;
            }
        }
       }
       if(found==true){
        cout<<x<<" "<<y<<endl;
       }
       if(!found){
        cout<<-1<<endl;
       }
    }
}



