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
        long long n;
        cin >> n;
        if (n == 10)
        {
            cout << -1 << '\n';
            continue;
        }
        if ((n % 12) == 0)
        {
            cout << 0 << " " << n << '\n';
            continue;
        }
        else if (n < 10)
        {
            cout << n << " " << 0 << '\n';
        }
        else if((n%12)==10){
            long long second = ((n/12)-1)*12;
            cout<<22<<" "<<second<<'\n';
        }
        else
        {
            long long second = (n / 12) * 12;
            long long first = n - second;
            cout << first << " " << second << '\n';
        }
    }
}