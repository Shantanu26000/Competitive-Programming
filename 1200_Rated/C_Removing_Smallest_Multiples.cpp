// #include <bits/stdc++.h>
// using namespace std;
// vector<int> primefactors(string &s, int val)
// {
//     int n = s.size();
//     vector<int> ans;
//     for (int i = 1; i * i <= val; i++)
//     {
//         if ((val % i) == 0)
//         {
//             if (i - 1 < n && s[i - 1] == '0')
//                 ans.push_back(i);

//             if (i != val / i)
//             {
//                 if (((val / i) - 1) < n && ((val / i) - 1) >= 0 && s[((val / i) - 1)] == '0')
//                     ans.push_back(val / i);
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
        // vector<int> temp;
        // int count = 1;
        // for (char ch : s)
        // {
        //     if (ch == '0')
        //     {
        //         temp.push_back(count);
        //     }
        //     count++;
        // }
        
       
        // int ans = 0;
        // for (int i = 0; i < temp.size(); i++)
        // {
        //     vector<int> f = primefactors(s, temp[i]);
        //     sort(f.begin(),f.end());
        //     for (auto it : f)
        //     {
        //         if(it==temp[i]) {
        //             ans+=it;
        //             break;
        //         }
        //         int ab = 1;
        //         long long  prod = 1LL*it * 1;
        //         while (prod < temp[i])
        //         {
        //             if ( (prod-1)<n && s[prod - 1] == '0')
        //             {
        //                 ab++;
        //             }
        //             else
        //             {
        //                 break;
        //             }
        //             prod = 1LL*it * ab;
        //         }
        //         if (prod == temp[i])
        //         {
        //             ans += it;
        //             break;
        //         }
        //     }
        // }
        // cout << ans << '\n';
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long long ans = 0;
        vector<long long>vis(n+1,0);
        for(long long i=1;i<=n;i++){
            for(long long j=i;j<=n;j+=i){
                    if(s[j-1]=='1') break;
                    if(vis[j]==0){
                        vis[j]=1;
                        ans+=i;
                    }
            }
        }
        cout<<ans<<'\n';
    }
}