#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum%3==0){
            cout<<sum/3<<'\n';
        }
        else{
               int result = 0;
               while(sum>0){
                  result += (sum%10);
                  sum/=10; 
               }
               cout<<result<<'\n';
        }
    }
}