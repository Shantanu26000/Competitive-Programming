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
        long long x, y;
        cin >> x >> y;
        bool found = false;
        long long i = 2;
        long long z = x*2;
        while (found == false && z < y)
        {
            if ((y % z) != 0){
                      found = true;
                      break;
            }
               
            else{
                i++;
            }
             z = x * i;    
        }
        if (found == true)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
}