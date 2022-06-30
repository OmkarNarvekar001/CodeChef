// Alternate Additions Problem Code: ALTERADD

#include <bits/stdc++.h>
using namespace std;

   string add(int a, int b)
{
    int ans = b - a;
    ans = ans % 3;
    if (ans == 2)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        string res = add(a, b);
        cout << res << endl;
    }
    return 0;
}


