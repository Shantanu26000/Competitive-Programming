#include<bits/stdc++.h>
using namespace std;
int dx[4]={1,-1,-1,1};
int dy[4]={1,1,-1,-1};
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long xk,yk;
        cin>>xk>>yk;
        long long xq,yq;
        cin>>xq>>yq;
        set<pair<long long,long long>>king_hit,queen_hit;
        for(int i=0;i<4;i++){
                king_hit.insert({xk+dx[i]*a,yk+dy[i]*b});
                king_hit.insert({xk+dx[i]*b,yk+dy[i]*a});

                queen_hit.insert({xq+dx[i]*a,yq+dy[i]*b});
                queen_hit.insert({xq+dx[i]*b,yq+dy[i]*a});
        }
        int ans=0;
        for(auto k:king_hit){
            if(queen_hit.find(k)!=queen_hit.end()) ans++;
        }
        cout<<ans<<endl;
    }
}