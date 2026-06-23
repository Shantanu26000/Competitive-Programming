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
        if ((n&(long long )1)!=0 || n<4)
        {
            cout << -1 << '\n';
            continue;
        }
        else
        {
            long long maxi = n / 4;
            long long mini = n / 6;
            if (n % 4 == 0 && n % 6 == 0)
            {
                cout << mini << " " << maxi << '\n';
            }
            else if (n % 4 == 0 && n % 6 != 0)
            {
                mini += 1;
                cout << mini << " " << maxi << '\n';
            }
            else if(n % 6 == 0 && n % 4 != 0)
            {
                cout << mini << " " << maxi << '\n';
            }
            else{
                  mini += 1;
                cout << mini << " " << maxi << '\n';   
            }
        }
    }
}