#include <bits/stdc++.h>
using namespace std;
long long getXor(long long n)
{
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long x = getXor(a-1);
        long long ans = a;
       
       
            if (x == b)
            {
                ans += 0;
            }
            else if ((x^b)==a)
            {
                ans+=2;
            }
            else
            {
                ans+=1;
            }
        
        cout << ans << '\n';
    }
}