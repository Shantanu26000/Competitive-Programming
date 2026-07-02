#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int cnt = 0;
        while(x>0){
               cnt++;
               x/=10;
        }
        string ans;
        ans.push_back('1');
        for(int i=1;i<cnt;i++) ans.push_back('0');
        ans.push_back('1');
        int an = stoi(ans);
        cout<<an<<'\n';
    }
}