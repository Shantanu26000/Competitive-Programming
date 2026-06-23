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
        long long n, a, b;
        cin >> n >> a >> b;
        if (a >= b)
        {
            /// b se krte hai
            if ((n % 3) == 0)
            {
                cout << (n / 3) * b << '\n';
            }
            else
            {
                cout << ((n / 3) + 1) * b << '\n';
            }
        }
        else
        {
            
            if((n%3)==0  && (3*a)<b){
                cout<<min((n * a),((n/3)-1)*b + (3*a))<<'\n';
            }
            else if (n < 3)
            {
                cout << min((a * n), b) << '\n';
            }
            else
            {
                cout << min((n * a), min( (((n/3) + 1)*b) , ((n / 3) * b) + ((n - ((n / 3) * 3)) * a)   )) << '\n';
            }
        }
    }
}