#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if((n&1)==0){
              int begin = n/2;
              int count = 1;
              cout<<begin<<" ";
              int temp = begin;
              while(count!=n){
                if((count&1)==0) {
                    temp = temp - count;
                }
                  else  {
                    temp = temp + count;
                  }
                  cout<<temp<<" ";
                  count++; 
              }
              cout<<'\n';
        }
        else{
                    int begin = (n+1)/2;
              int count = 1;
              int temp = begin;
              cout<<temp<<" ";
              while(count!=n){
                if((count&1)==0) {
                    temp = temp + count;
                }
                  else  {
                    temp = temp - count;
                  }
                  cout<<temp<<" ";
                  count++; 
              } 
              cout<<'\n';   
        }
    }
}