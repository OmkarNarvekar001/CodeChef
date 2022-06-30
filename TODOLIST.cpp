// Problems in your to-do list Problem Code: TODOLIST

#include <bits/stdc++.h>
using namespace std;

int solve(int np, vector<int> vec)
{
    int ctr = 0, tresh = 1000;
    int final;

    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i]>=tresh){
            ctr++;
        }
    }
    final = ctr;
    return final;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int np, dr;
        vector<int> vec;
        cin >> np;
        for (int i = 0; i < np; i++)
        {
            cin >> dr;
            vec.push_back(dr);
        }
       int ans = solve(np, vec);
       cout<<ans<<endl;
    }
    return 0;
}
