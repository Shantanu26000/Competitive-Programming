#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,s;
        cin>>n>>x>>s;
        int in = 1;
        int e = 1;
        int a = 1;
        vector<bool>seats(x*s,false);
        string st;
        cin>>st;
        int ans = 0;
        for(int i=0;i<n && in<=x && e<=x && a<=x;i++){
            if(st[i]=='A'){
                int temp = a*s - 1;
                if(seats[temp]==true){
                         a++;
                         if(a<=x) {
                            ans++;
                            seats[(a*s)-s-2]=false;
                         }
                         e=a;
                }
                else {
                    
                }
            }
        }
    }
}