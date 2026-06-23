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
        int n;
        cin>>n;
        vector<int> a(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
         if (n == 1 || n == 2)
        {
            cout << "Yes" << '\n';
        }
        else if(mp.size()==1){
            cout<<"Yes"<<'\n';
            
        }
         else if (mp.size() == 2)
        {
            auto it = mp.begin();
            int f = it->second;
            it++;
            int se = it->second;
            if ((n % 2 == 0) && (f == se))
            {
                cout << "Yes" << '\n';
            }
            else if ((n % 2 != 0) && (abs(f - se) == 1))
            {
                cout << "Yes" << '\n';
            }
            else
            {
                cout << "No" << '\n';
            }
        }
        else
        {
            cout << "No" << '\n';
        }
    }
}