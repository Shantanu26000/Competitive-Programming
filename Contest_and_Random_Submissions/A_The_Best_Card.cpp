#include <bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if (a == 2)
        return true;
    for (int i = 2; i < a; i++)
    {
        if ((a % i) == 0)
            return false;
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
        int n;
        cin >> n;
        if (isPrime(n + 1) == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}