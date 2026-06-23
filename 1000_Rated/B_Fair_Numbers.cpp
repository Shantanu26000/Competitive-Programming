#include <bits/stdc++.h>
using namespace std;
bool isDivisible(long long s)
{
    long long temp = s;
    while (temp > 0)
    {
        int digit = temp % 10;
        if (digit != 0 && (s % digit) != 0)
        {
            return false;
        }
        temp /= 10;
    }
    return true;
}
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
        while (isDivisible(n) == false)
        {
            n++;
        }
        cout << n << '\n';
    }
}