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
        long long c;
        cin >> c;
        vector<long long> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        if (n == 1)
        {
            cout << (long long)((sqrt((long double)c) - s[0]) / 2) << '\n';
        }
        else
        {
            long long third_term = 0;
            long long second_term = 0;
            long long first_term = 0;
            for (long long k : s)
            {
                third_term += k * k;
                second_term += k;
            }
            second_term *= 4;
            third_term = (-1) * (c - third_term);
            first_term = 4 * n;
            long double discriminant = (long double)second_term * second_term - 4.0L * first_term * third_term;
            discriminant = max((long double)0, discriminant);
            long double first = (-1) * second_term;
            long double second = sqrt(discriminant);
            long long ans1 = (long long)round((first - second) / (2 * first_term));
            long long ans2 = (long long)round((first + second) / (2 * first_term));
            if (ans1 >= 0 && ans2 >= 0)
                cout << min(ans1, ans2) << '\n';
            else
            {
                cout << max(ans1, ans2) << '\n';
            }
        }
    }
}