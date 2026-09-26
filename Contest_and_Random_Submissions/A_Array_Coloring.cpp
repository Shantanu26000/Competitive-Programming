#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        bool found = false;
        for(int i=0;i<n-1;i++){
            if(((a[i]&1)==0 && (a[i+1]&1)!=0) || ((a[i]&1)!=0 && (a[i+1]&1)==0)){
                
            }
            else{
                found = true;
                break;
            }
        }
        if(found==true) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
}