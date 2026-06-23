#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        vector<long long> prefix(n);
        prefix[0] = a[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + a[i];
        }

        long long ans = 0;

        for(int x = 0; x <= k; x++){
            int start = 2 * x;
            int end = n - (k - x) - 1;

            if(start > end) continue;

            long long sum = prefix[end] - (start > 0 ? prefix[start-1] : 0);
            ans = max(ans, sum);
        }

        cout << ans << '\n';
    }
}