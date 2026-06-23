// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
//         vector<bool> marked(n + 1, false);
//         int ans = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (marked[i + 1] == true)
//             {
//                 break;
//             }
//             else
//             {
//                 ans++;
//                 marked[i + 1] = true;
//                 marked[a[i]] = true;
//             }
//         }
//         cout << ans << '\n';
//     }
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> p(n+1);
        for(int i = 1; i <= n; i++) cin >> p[i];
        
        // prefix_safe[i] = number of safe chairs among first i chairs
        vector<int> prefix_safe(n+2, 0);
        for(int i = 1; i <= n; i++){
            prefix_safe[i] = prefix_safe[i-1] + (p[i] <= i ? 1 : 0);
        }
        
        // Option 1: sit on no dangerous chair -> all safe chairs
        int ans = prefix_safe[n];
        
        // Option 2: sit on exactly one dangerous chair i
        // game ends at p[i], we collect safe chairs before p[i] plus chair i itself
        for(int i = 1; i <= n; i++){
            if(p[i] > i){  // dangerous chair
                int end = p[i];
                int count = prefix_safe[end - 1] + 1;
                ans = max(ans, count);
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}