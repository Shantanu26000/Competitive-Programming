#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1) {
            cout<<1<<'\n';
            continue;
        }
        int cal = 0;
        int b = -1;
        int len = -1;
        int left = 0;
        int right = 1;
        while(right<n){
            if(s[left]==s[right]){
                 right++;
            }
            else{
                int temp = (right - 1) - left + 1;
                if(len<temp){
                    len = temp;
                    b = left;
                }
                cal+=1;
                left = right;
                right++;
            }
        }
        cal+=1;
        int another = (n-1) - left + 1;
        if(len<another) {
            len = another;
            b = left;
        }

        if(cal==n) {
            cout<<n<<'\n';
            continue;
        }
      
        string main = s.substr(b+1,n-(b+1));
        string temp = s.substr(0,b+1);
        main +=temp;
        int cal_2 = 0;
        left = 0;
        right = 1;
         while(right<n){
            if(main[left]==main[right]){
                 right++;
            }
            else{
                cal_2+=1;
                left = right;
                right++;
            }
        }
        cal_2++;
        cout<<max(cal,cal_2)<<'\n';
    }
}