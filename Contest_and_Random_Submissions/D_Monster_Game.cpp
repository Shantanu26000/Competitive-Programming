#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    for (int i = 0; i < n; i++)
      cin >> b[i];
    sort(a.begin(), a.end());
    vector<long long> sum(n);
    long long temp = 0;
    for (int i = 0; i < n; i++)
    {
      temp += b[i];
      sum[i] = temp;
    }
    long long ans = LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
      int x = a[i];
      int usable_swords = n - i;
      int levels = upper_bound(sum.begin(), sum.end(), usable_swords) - sum.begin();
      ans = max(ans, (long long)levels * x);
    }
    cout << ans << '\n';
  }
}