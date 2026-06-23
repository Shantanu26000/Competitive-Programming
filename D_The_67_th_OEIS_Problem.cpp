#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int LIMIT = 200000;
    vector<int> primes;
    vector<bool> isPrime(LIMIT, true);
    for (int i = 2; i < LIMIT; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (long long j = 1LL * i * i; j < LIMIT; j += i)
                isPrime[j] = false;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << primes[0];
        for (int i = 1; i < n; i++)
            cout << ' ' << 1LL * primes[i - 1] * primes[i];
        cout << '\n';
    }
}