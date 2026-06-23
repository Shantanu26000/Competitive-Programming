#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
const long long inv6 = 166666668;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long ans = n % mod;
        ans = (ans * ((n + 1) % mod)) % mod;
        ans = (ans * ((4 * n - 1) % mod)) % mod;
        ans = (ans * inv6) % mod;
        cout << (ans * 2022) % mod << '\n';
    }
}
