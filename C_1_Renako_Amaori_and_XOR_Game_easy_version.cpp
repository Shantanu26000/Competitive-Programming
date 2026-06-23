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
        cin >> n;
        vector<int> a(n), b(n);
        int og_a_z = 0;
        int og_a_o = 0;
        int og_b_z = 0;
        int og_b_o = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                og_a_z++;
            else
                og_a_o++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 0)
                og_b_z++;
            else
                og_b_o++;
        }
        if (n == 1)
        {
            if ((a[0] == 1 && b[0] == 1) || (a[0] == 0 && b[0] == 0))
            {
                cout << "Tie" << '\n';
                continue;
            }
            else
            {
                cout << "Ajisai" << '\n';
                continue;
            }
        }
        int a_z = og_a_z % 2;
        int a_o = og_a_o % 2;
        int b_z = og_b_z % 2;
        int b_o = og_b_o % 2;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                continue;
            else
            {
                if ((i & 1) == 0)
                {
                    // first vala

                    if (og_a_o == 0 && b[i] == 1)
                    {
                        a[i] = 1;
                        b[i] = 0;
                        og_a_o++;
                        og_a_z--;
                        og_b_o--;
                        og_b_z++;
                        a_z = og_a_z % 2;
                        a_o = og_a_o % 2;
                        b_z = og_b_z % 2;
                        b_o = og_b_o % 2;
                    }
                    else if (og_a_o != 0 && a_z == 0 && a_o == 0)
                    {
                        if (b[i] == 1)
                        {
                            a[i] = 1;
                            b[i] = 0;
                            og_a_o++;
                            og_a_z--;
                            og_b_o--;
                            og_b_z++;
                            a_z = og_a_z % 2;
                            a_o = og_a_o % 2;
                            b_z = og_b_z % 2;
                            b_o = og_b_o % 2;
                        }
                        else
                        {
                            a[i] = 0;
                            b[i] = 1;
                            og_a_o--;
                            og_a_z++;
                            og_b_o++;
                            og_b_z--;
                            a_z = og_a_z % 2;
                            a_o = og_a_o % 2;
                            b_z = og_b_z % 2;
                            b_o = og_b_o % 2;
                        }
                    }
                    else if (og_a_o != 0 && a_z == 1 && a_o == 0)
                    {
                        if (b[i] == 1)
                        {
                            a[i] = 1;
                            b[i] = 0;
                            og_a_o++;
                            og_a_z--;
                            og_b_o--;
                            og_b_z++;
                            a_z = og_a_z % 2;
                            a_o = og_a_o % 2;
                            b_z = og_b_z % 2;
                            b_o = og_b_o % 2;
                        }
                        else
                        {
                            a[i] = 0;
                            b[i] = 1;
                            og_a_o--;
                            og_a_z++;
                            og_b_o++;
                            og_b_z--;
                            a_z = og_a_z % 2;
                            a_o = og_a_o % 2;
                            b_z = og_b_z % 2;
                            b_o = og_b_o % 2;
                        }
                    }
                    else
                    {
                    }
                }
                else
                {
                    // second vala
                    if (og_b_o == 0 && a[i] == 1)
                    {
                        b[i] = 1;
                        a[i] = 0;
                        og_b_o++;
                        og_b_z--;
                        og_a_o--;
                        og_a_z++;
                        a_z = og_a_z % 2;
                        a_o = og_a_o % 2;
                        b_z = og_b_z % 2;
                        b_o = og_b_o % 2;
                    }
                    else if (og_b_o != 0 && b_z == 0 && b_o == 0)
                    {
                        if (a[i] == 1)
                        {
                            b[i] = 1;
                            a[i] = 0;
                            og_b_o++;
                            og_b_z--;
                            og_a_o--;
                            og_a_z++;
                            a_z = og_a_z % 2;
                            a_o = og_a_o % 2;
                            b_z = og_b_z % 2;
                            b_o = og_b_o % 2;
                        }
                        else
                        {
                            b[i] = 0;
                            a[i] = 1;
                            og_b_o--;
                            og_b_z++;
                            og_a_o++;
                            og_a_z--;
                            a_z = og_a_z % 2;
                            a_o = og_a_o % 2;
                            b_z = og_b_z % 2;
                            b_o = og_b_o % 2;
                        }
                    }
                    else if (og_b_o != 0 && b_z == 1 && b_o == 0)
                    {
                        if (a[i] == 1)
                        {
                            b[i] = 1;
                            a[i] = 0;
                            og_b_o++;
                            og_b_z--;
                            og_a_o--;
                            og_a_z++;
                            a_z = og_a_z % 2;
                            a_o = og_a_o % 2;
                            b_z = og_b_z % 2;
                            b_o = og_b_o % 2;
                        }
                        else
                        {
                            b[i] = 0;
                            a[i] = 1;
                            og_b_o--;
                            og_b_z++;
                            og_a_o++;
                            og_a_z--;
                            a_z = og_a_z % 2;
                            a_o = og_a_o % 2;
                            b_z = og_b_z % 2;
                            b_o = og_b_o % 2;
                        }
                    }
                    else
                    {
                    }
                }
            }
        }
        bool Ajisai_is_Winner = false;
        bool Mai_is_Winner = false;
        if ((a_o == 1 && a_z == 1) || (a_o == 1 && a_z == 0))
        {
            Ajisai_is_Winner = true;
        }
        if ((b_o == 1 && b_z == 1) || (b_o == 1 && b_z == 0))
        {
            Mai_is_Winner = true;
        }

        if ((Ajisai_is_Winner == true && Mai_is_Winner == true) || (Ajisai_is_Winner == false && Mai_is_Winner == false))
        {
            cout << "Tie" << '\n';
        }
        else if (Ajisai_is_Winner == true && Mai_is_Winner == false)
        {
            cout << "Ajisai" << '\n';
        }
        else
        {
            cout << "Mai" << '\n';
        }
    }
}