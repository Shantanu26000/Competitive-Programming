#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int k= abs(a[0]-1);
        for(int i=1;i<n;i++){
            k= gcd(k,abs(a[i]-(i+1)));
        }
        cout<<k<<endl;
    }
}