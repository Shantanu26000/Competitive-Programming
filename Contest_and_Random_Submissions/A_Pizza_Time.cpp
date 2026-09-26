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
        int ans = 0;
        while (n > 2)
        {
            if (n % 3 == 0 )
            {
                ans += n / 3;
                n /= 3;
            }
            else if (n%3==1){
                ans+=n/3;
                n/=3;
                n++;
            }
            else
            {
                ans += n / 3 ;
                n /= 3;
                n+=2;
            }
        }
        cout << ans << '\n';
    }
}