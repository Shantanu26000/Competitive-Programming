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
        if(n==1) cout<<1<<'\n';
        else if(n==2) cout<<9<<'\n';
        else{
        long long ref = (n*n)-(n+1);
 long long sum2 = ref + (ref-1) + (ref + 1) + (ref -n) + (ref + n);
 long long sum1 = (n*n) + ((n*n) -1) + ((n*n) -2) + ((n*n)-(n+1));
           cout<<max(sum1,sum2)<<'\n';
        }
    }
}