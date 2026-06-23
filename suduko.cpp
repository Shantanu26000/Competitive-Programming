#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total_voters;
    cout << "Total Voters :" << '\n';
    cin >> total_voters;
    cout << "Votes" << '\n';
    vector<char> votes;
    char ch;
    while (cin >> ch && ch != '#')
    {
        votes.push_back(ch);
    }
    int n = votes.size();
    if (n <= (total_voters / 2))
    {
        int b_count = 0;
        int c_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (votes[i] == 'B')
                b_count++;
            else
                c_count++;
        }
        cout << "BJP Vote Bank is : " << b_count << '\n';
        cout << "Congress Vote Bank is : " << c_count << '\n';
    }
    else
    {
        cout << "BJP Vote Bank is : " << (9 * total_voters) / 10 << '\n';
        cout << "Congress Vote Bank is : " << total_voters - ((9 * total_voters) / 10) << '\n';
    }
}