#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,x;
        cin>>n>>k>>x;
        long long minsum=(k*(k+1))/2;
        long long maxsum= k*(2*n +1-k)/2;
        if(maxsum>=x && minsum<=x) {
            cout<<"Yes"<<endl;
            continue;
        }
        else cout<<"No"<<endl;
    }
}