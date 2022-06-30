// Wordle Problem Code: WORDLE

#include <bits/stdc++.h>
using namespace std;

void wordle(string s, string g)
{
    string m = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == g[i])
        {
            m = m + "G";
        }
        else
        {
            m = m + "B";
        }
    }
    cout<<m<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, g;
        cin >> s >> g;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        transform(g.begin(), g.end(), g.begin(), ::toupper);
        s.resize(5);
        g.resize(5);
        wordle(s, g);
    }
    return 0;
}