#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>frequency_of_letter(26,0);
        for(int i=0;i<n;i++){
            frequency_of_letter[s[i]-'a']++;
        }
        long long odd_occurence=0;
        for(int i=0;i<26;i++){
            odd_occurence+=(frequency_of_letter[i] % 2 );
        }
        if(odd_occurence-k>1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}