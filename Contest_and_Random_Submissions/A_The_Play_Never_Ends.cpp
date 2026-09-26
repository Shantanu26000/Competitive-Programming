#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    if((n+1)%3==0 ||  n%3==0) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
    }
}