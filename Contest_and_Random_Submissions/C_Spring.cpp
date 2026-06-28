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
        long long a, b, c;
        long long m;
        cin >> a >> b >> c >> m;
        long long a_alone_total = (m / a) * 6;
        long long b_alone_total = (m / b) * 6;
        long long c_alone_total = (m / c) * 6;
        long long a_with_b = (m / ((a * b) / (__gcd(a, b)))) * 3;
        long long a_with_c = (m / ((a * c) / (__gcd(a, c)))) * 3;
        long long b_with_c = (m / ((c * b) / (__gcd(c, b)))) * 3;
        long long lcm_with_a_and_b = (a * b) / (__gcd(a, b));
        long long lcm_with_c = (c * lcm_with_a_and_b) / (__gcd(c, lcm_with_a_and_b));
        long long a_with_b_and_c = (m / lcm_with_c) * 2;
        cout << a_alone_total - a_with_b - a_with_c + a_with_b_and_c << " " << b_alone_total - a_with_b - b_with_c + a_with_b_and_c << " " << c_alone_total - b_with_c - a_with_c + a_with_b_and_c << '\n';
    }
}